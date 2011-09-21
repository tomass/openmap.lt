<?php
/*****************************************************************
 * Parameters:
 *  debug=yes|no - turn on debugging (default=no)
 *  bbox=L,T,R,B - bounding box
 *  type=fuel|cafe|hotel
 ****************************************************************/

// tags on nodes/ways
$name = "";
$operator = "";
$description = "";
$opening_hours = "";
$city = "";
$street = "";
$housenumber = "";

// properties
$p_lat = "";
$p_lon = "";
$p_title = "";
$p_description = "";

// internal
$g_debug = false;

/***************************************************************
 * Print out debug information. This print out something only
 * if called with an parameter debug=yes
 ***************************************************************/
function debug($txt) {
    global $g_debug;
    if ($g_debug) {
        echo $txt, PHP_EOL;
    }
} // debug

/************************************************************
 * Parse tags in a given string
 ************************************************************/
function parse_tags($tagstr)
{
  global $name, $operator, $description, $opening_hours, $city, $street, $housenumber;
  $name = "";
  $operator = "";
  $description = "";
  $opening_hours = "";
  $city = "";
  $street = "";
  $housenumber = "";

  $tagstr = substr($tagstr, 1, strlen($tagstr) - 2);
  $tags = explode(",", $tagstr);
  $i = count($tags) - 1;
  while ($i > 0) {
    $key = $tags[$i-1];
    $value = $tags[$i];
    if ($key === "name") {
      $name = $value;
    } else if ($key === "operator") {
      $operator = $value;
    } else if ($key === "description") {
      $description = $value;
    } else if ($key === "opening_hours") {
      $opening_hours = $value;
    } else if ($key === "addr:city") {
      $city = $value;
    } else if ($key === "addr:street") {
      $street = $value;
    } else if ($key === "addr:housenumber") {
      $housenumber = $value;
    }
    $i = $i - 2;
  }
} // parse_tags

/*******************************************************************
 * Add a given string to a description
 ************************************************************/
function add_to_description($info)
{
  global $p_description;

  if ($p_description !== "") {
    $p_description = $p_description . "<br>";
  }
  $p_description = $p_descriptionj . $info;
} // add_to_description

/**********************************************************************
 * Assemble html title for a poi using a prefetched tag info
 * function parse_tags should have been called before calling this one.
 * Title of a POI would be taken from a name tag, but if that one is
 * empty, then a given default value would be used. Default value
 * would usually specify type of POI (fuel, cafe, restaurant etc.)
 **********************************************************************/
function assemble_title($default)
{
  global $p_title, $name;

  if ($name !== "") {
    $p_title = $name;
  } else {
    $p_title = $default;
  }
  debug("Title=" . $p_title);
} // assemble_title

/***********************************************************************
 * Assemble html description for a poi using a prefetched tag info
 * function parse_tags should have been called before calling this one.
 **********************************************************************/
function assemble_description()
{
  global $name, $operator, $description, $opening_hours, $city, $street, $housenumber; // tags
  global $p_lat, $p_lon, $p_title, $p_description; // properties

  // Description
  $p_description = $description;

  // Working time
  if ($opening_hours !== "") {
    add_to_description("<i>Tel:</i>" . $opening_hours);
  }

  // Address
  if ($city !== "" or $street !== "" or $housenumber !== "") {
    add_to_description("<i>Adr:</i>" . $city . " " . $street . " " . $housenumber);
  }
  debug("Description=".$p_description);
} // assemble_description

/*************************************************************
 * Fetch poi information for a given bbox
 * @left, @top, @right, @bottom - bbox boundaries
 * @type:
 *   fuel - amenity=fuel
 *   cafe - amenity=cafe
 *   hotel - tourism=hotel
 ************************************************************/
function fetch_poi($left, $top, $right, $bottom, $p_type)
{
    global $p_title, $p_description;
    global $link;
    // Contruct a query part filtering out only required POI's
    debug("poi type is " . $p_type);
    switch($p_type){
        case 'fuel':
            $filter = "p.amenity = 'fuel'";
            break;
        case 'cafe':
            $filter = "p.amenity = 'cafe'";
            break;
        case 'hotel':
            $filter = "p.tourism = 'hotel'";
            break;
        default:
            $filter = '1';
    }
    $query = "SELECT n.lat, n.lon, n.tags
    			FROM planet_osm_point p, planet_osm_nodes n
    			WHERE p.way && SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,900913)
    				AND {$filter} AND p.osm_id = n.id";
    debug('Query is: ' . $query);
    $res = pg_query($link, $query);
    if (!$res) {
        throw new Exception(pg_last_error($link));
        exit;
    }
    $id = 0;
    $arr = array();
    while ($row = pg_fetch_row($res)) {
        debug("lat:" . $row[0] . ", lon:" . $row[1] . ", tags:" . $row[2]);
        parse_tags($row[2]);
        assemble_title("Kolonėlė");
        assemble_description();
    
        // add data to future json
        $latlon = array($row[0],$row[1]);
    
        $arr[] = array(
    		'geometry' => array(
    			'type' => 'Point',
    			'coordinates' => $latlon,
            ),
            'type' => 'Feature',
            'properties' => array(
                'title' => $p_title,
                'description' => $p_description,
            ),
          	'id' => $id,
        );
        $id++;
    }
    header('Content-type: application/json; charset=UTF-8');
    echo '{"type":"FeatureCollection","features":', json_encode($arr), '}';
} // fetch_poi

//***********************************************************************
// Check if debugging is on/off
// When debugging is on, prior to geojson information you will get
// a number of "human readable" debug messages
$debug = $_GET["debug"];
if ($debug === "yes") {
    $g_debug = true;
    error_reporting(E_ALL ^ E_NOTICE);
    echo '<pre>';
}else{
    error_reporting(0);
}

// Check the bounding box
$bbox = $_GET["bbox"];
$cl = explode(",", $bbox);
if (!is_array($cl) or count($cl) != 4) {
  print "incorrect bbox parameter";
  exit;
}

list($left, $bottom, $right, $top) = $cl;

// Try fixing some common mistakes
if ($left > $right)
{
    $temp  = $left;
    $left  = $right;
    $right = $temp;
}

if ($bottom > $top)
{
    $temp   = $top;
    $top    = $bottom;
    $bottom = $temp;
}
debug("left="   . $left);
debug("top="    . $top);
debug("right="  . $right);
debug("bottom=" . $bottom);

//limit request to 1 square degree, ~ 100000 * 200000 in 900913
if(abs($top - $bottom) * abs($right - $left) > 20000000000){
    die('Requests is limited to 1 square degree');
}

// Check the type of poi to be fetched
$type = $_GET["type"];
if ($type === null) {
  $type = "fuel"; // default poi type is fuel
}

$config = require './config.php';
$link = pg_connect(vsprintf('host=%s port=%u dbname=%s user=%s password=%s', $config['resource']['db']));
if (!$link) {
    debug('Cannot connect to database');
    die;
}

fetch_poi($left, $top, $right, $bottom, $type);

pg_close($link);
?>