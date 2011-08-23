<?php
header("Content-type: text/plain; charset=UTF-8");

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
function msg($txt) {
  global $g_debug;
  if ($g_debug) {
    print $txt . "\n";
  }
} // msg

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
  msg("Title=" . $p_title);
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
  msg("Description=".$p_description);
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

  // Contruct a query part filtering out only required POI's
  msg("poi type is " . $p_type);
  if ($p_type === "fuel") {
    $filter = "p.amenity = 'fuel'";
  } else if ($p_type === "cafe") {
    $filter = "p.amenity = 'cafe'";
  } else if ($p_type === "hotel") {
    $filter = "p.tourism = 'hotel'";
  }

  msg("Query is: " . "SELECT n.lat, n.lon, n.tags FROM planet_osm_point p, planet_osm_nodes n
 where p.way && SetSRID('BOX3D(" . $left . " " . $top . "," . $right . " " . $bottom . ")'::box3d,900913)
   and " . $filter .
 " and p.osm_id = n.id;");
  $res = pg_query("SELECT n.lat, n.lon, n.tags FROM planet_osm_point p, planet_osm_nodes n
 where p.way && SetSRID('BOX3D(" . $left . " " . $top . "," . $right . " " . $bottom . ")'::box3d,900913)
   and " . $filter .
 " and p.osm_id = n.id;");
  if (!$res) {
    print "ojojoj" . pg_last_error();
    exit;
  }

  $id = 0;
  while ($row = pg_fetch_row($res)) {
    msg("lat:" . $row[0] . ", lon:" . $row[1] . ", tags:" . $row[2]);
    //msg("lat:" . $row[0] . ", lon:" . $row[1]);
    parse_tags($row[2]);
    assemble_title("Kolonėlė");
    assemble_description();

    // add data to future json
    $lon = $row[0];
    $lat = $row[1];
    $latlon = array($lon,$lat);

    $arr[] = array(
      "geometry" => array("type" => "Point", "coordinates" => $latlon),
      "type" => "Feature",
      "properties" => array(
        "title" => $p_title,
        "description" => $p_description,
      ),
      "id" => $id
    );
    $id++;
  }
  print "Done.";

  $geojson = '{"type":"FeatureCollection","features":'.json_encode($arr).'}';
  print $geojson;
} // fetch_poi

//***********************************************************************
// Check if debugging is on/off
// When debugging is on, prior to geojson information you will get
// a number of "human readable" debug messages
$debug = $_GET["debug"];
if ($debug === "yes") {
  $g_debug = true;
}

// Check the bounding box
$bbox = $_GET["bbox"];
$cl = explode(",", $bbox);
if (!is_array($cl) or count($cl) != 4) {
  print "incorrect bbox parameter";
  exit;
}
$left = $cl[0];
$top = $cl[1];
$right = $cl[2];
$bottom = $cl[3];

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
msg("left="   . $left);
msg("top="    . $top);
msg("right="  . $right);
msg("bottom=" . $bottom);

// Check the type of poi to be fetched
$type = $_GET["type"];
if ($type === null) {
  $type = "fuel"; // default poi type is fuel
}

//$link = connect_db();
$link = pg_connect('host=localhost port=5432 dbname=gis user=tomas');
if (!$link) {
  print "ajajajaj";
  exit;
}

fetch_poi($left, $top, $right, $bottom, $type);

pg_close();
?>