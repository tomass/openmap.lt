<?php
/*****************************************************************
 * Parameters:
 *  debug=yes|no - turn on debugging (default=no)
 *  bbox=L,B,R,T - bounding box in EPSG:4326
 *  type=history|monument|tower|attraction|picnic_fireplace|picnic_nofireplace|camping|cafe|restaurant|pub|hotel|hostel|fuel
 *       groupAttraction| (castles, hillforts, museums, parks and other attractions)
 *       groupCamping| (camping, picnic palces etc.)
 *       groupFood| (cafes, restaurants, pubs, bars etc.)
 *       groupAccomodation| (hotels, hostels etc.)
 *       groupAuto (fuel, garages etc.)
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

/***************************************************************
 * Print out debug information. This print out something only
 * if called with an parameter debug=yes
 ***************************************************************/
function debug($txt) {
    if (DEBUG) {
        echo $txt, PHP_EOL;
    }
} // debug

/************************************************************
 * Parse tags in a given string
 ************************************************************/
function parse_tags($tagstr)
{
  global $name, $operator, $description, $opening_hours, $city, $street, $housenumber,
         $phone, $email, $url, $website, $wikipedia, $wikipedialt, $notes, $height, $fee;
  $name = "";
  $operator = "";
  $description = "";
  $opening_hours = "";
  $city = "";
  $street = "";
  $housenumber = "";
  $phone = "";
  $email = "";
  $url = "";
  $website = "";
  $wikipedia = "";
  $wikipedialt = "";
  $notes = "";
  $height = "";
  $fee = "";

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
    } else if ($key === "phone") {
      $phone = $value;
    } else if ($key === "email") {
      $email = $value;
    } else if ($key === "url") {
      $url = $value;
    } else if ($key === "website") {
      $website = $value;
    } else if ($key === "wikipedia") {
      $wikipedia = $value;
    } else if ($key === "wikipedia:lt") {
      $wikipedialt = $value;
    } else if ($key === "notes") {
      $notes = $value;
    } else if ($key === "height") {
      $height = $value;
    } else if ($key === "fee") {
      $fee = $value;
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
    add_to_description("<i>Darbo laikas:</i>" . $opening_hours);
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
    switch ($p_type) {
        case 'groupAttraction':
            $p_type = 'history|monument|tower|attraction';
            break;
        case 'groupCamping':
            $p_type = 'camping|picnic_fireplace|picnic_nofireplace';
            break;
        case 'groupFood':
            $p_type = 'restaurant|cafe|pub';
            break;
        case 'groupAccomodation':
            $p_type = 'hostel|hotel';
            break;
        case 'groupAuto':
            $p_type = 'fuel';
            break;
    }
    $types = explode("|", $p_type);
    if (!is_array($types) or count($types) == 0) {
        debug("ERROR: Incorrect type parameter");
        die;
    }
    $id = 0;
    $arr = array();
    $i = 0;
    while ($i < count($types)) {
        debug("processing type=" . $types[$i]);

        switch($types[$i]){
            case 'history':
                $filter = "p.historic in ('hill_fort', 'archaeological_site', 'castle', 'ruins')";
                $tp = 'HIS';
                break;
            case 'monument':
                $filter = "p.historic in ('monument', 'memorial')";
                $tp = 'MON';
                break;
            case 'tower':
                $filter = "p.man_made = 'tower' and \"tower:type\" = 'observation'";
                $tp = 'TOW';
                break;
            case 'attraction':
                $filter = "p.tourism in ('attraction', 'viewpoint')";
                $tp = 'ATT';
                break;
            case 'picnic_fireplace':
                $filter = "p.tourism = 'picnic_site' and fireplace = 'yes'";
                $tp = 'PIF';
                break;
            case 'picnic_nofireplace':
                $filter = "p.tourism = 'picnic_site' and (fireplace is null or fireplace = 'no')";
                $tp = 'PIC';
                break;
            case 'camping':
                $filter = "p.tourism = 'camp_site'";
                $tp = 'CAM';
                break;
            case 'hostel':
                $filter = "p.tourism in ('chalet', 'hostel')";
                $tp = 'HOS';
                break;
            case 'fuel':
                $filter = "p.amenity = 'fuel'";
                $tp = 'FUE';
                break;
            case 'cafe':
                $filter = "p.amenity = 'cafe'";
                $tp = 'CAF';
                break;
            case 'restaurant':
                $filter = "p.amenity = 'restaurant'";
                $tp = 'RES';
                break;
            case 'pub':
                $filter = "p.amenity in ('pub', 'bar')";
                $tp = 'PUB';
                break;
            case 'hotel':
                $filter = "p.tourism = 'hotel'";
                $tp = 'HOT';
                break;
            default:
                $filter = '1';
        }

        $query = "SELECT ST_X(ST_Transform(way,4326)) lat, ST_Y(ST_Transform(way,4326)) lon, n.tags
			FROM planet_osm_point p
			LEFT JOIN planet_osm_nodes n ON n.id = p.osm_id
			WHERE p.way && ST_Transform(SetSRID('BOX3D(25 55,26 54)'::box3d,4326), 900913)
                     AND {$filter}";
        debug('Query is: ' . $query);
        $res = pg_query($link, $query);
        if (!$res) {
            echo pg_last_error();
            throw new Exception(pg_last_error($link));
            exit;
        }
        while ($row = pg_fetch_row($res)) {
            debug("lat:" . $row[0] . ", lon:" . $row[1] . ", tags:" . $row[2]);
            parse_tags($row[2]);
            $default_title = "";
            switch($types[$i]) {
                case 'fuel':
                    $default_title = "Kolon?l?";
                    break;
                case 'cafe':
                    $default_title = "Kavin?";
                    break;
                case 'hotel':
                    $default_title = "Vie�butis";
                    break;
                default:
                    $default_title = "Ne�inomas ta�kas";
            }
            assemble_title("Kolon?l?");
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
                    'tp' => $tp,
                    'title' => $p_title,
                    'description' => $p_description,
                ),
                'id' => $id,
            );
            $id++;
        }
        $i++;
    } // while loop through all type values
    header('Content-type: application/json; charset=UTF-8');
    echo '{"type":"FeatureCollection","features":', json_encode($arr), '}';
} // fetch_poi

//***********************************************************************
// Check if debugging is on/off
// When debugging is on, prior to geojson information you will get
// a number of "human readable" debug messages
define('DEBUG', ($_GET['debug'] == 'yes'));
if (DEBUG) {
    error_reporting(E_ALL ^ E_NOTICE);
    echo '<pre>';
}else{
    error_reporting(0);
}

// Check the bounding box
$cl = explode(',', $_GET['bbox']);
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

//limit request to 1 square degree
if(abs($top - $bottom) * abs($right - $left) > 1){
    die('Requests are limited to 1 square degree');
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
