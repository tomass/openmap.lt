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

/*******************************************************************
 * Add a given string to a description
 ************************************************************/
function add_to_description($info)
{
    global $p_description;

    if (!empty($p_description)) {
        $p_description = $p_description . '<br>';
    } else {
        $p_description = $p_description . '<p>';
    }
    $p_description = $p_description . $info;
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

  if (!empty($name)) {
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
  global $name, $operator, $description, $opening_hours, $city, $street, $housenumber,
         $information, $wikipedia, $wikipedialt, $wikipediaen, $phone, $email, $website,
         $height, $fee, $url, $image, $postcode; // tags
  global $p_lat, $p_lon, $p_title, $p_description; // properties

    // Description
    $p_description = $description;

    // Information
    if (!empty($information)) {
        add_to_description("{$information}");
    }

    // Working time
    if (!empty($opening_hours)) {
        add_to_description("<i>Darbo laikas:</i> {$opening_hours}");
    }

    // Address
    if (!empty($city) || !empty($street) || !empty($housenumber)) {
        add_to_description("<i>Adr:</i> {$city} {$postcode} {$street} {$housenumber}");
    }

    // Phone
    if (!empty($phone)) {
        add_to_description("<i>Tel:</i> {$phone}");
    }

    // E-mail
    if (!empty($email)) {
        add_to_description("<i>E-paštas:</i> {$email}");
    }

    // Website (according to OSM wiki url tag is deprecated, website tag should be used)
    if (!empty($website) and substr($website, 0, 4) !== "http") {
        $website = "http://" . $website;
    }
    if (!empty($website)) {
        if (strlen($website) > 30) {
            $url_name = "Svetainė";
        } else {
            $url_name = $website;
        }
        add_to_description("<a href=\"{$website}\" target=\" blank\">{$url_name}</a>");
    }

    // Website (according to OSM wiki url tag is deprecated, website tag should be used)
    if (!empty($url) and substr($url, 0, 4) !== "http") {
        $url = "http://" . $url;
    }
    if (!empty($url)) {
        if (strlen($url) > 30) {
            $url_name = "Svetainė";
        } else {
            $url_name = $url;
        }
        add_to_description("<a href=\"{$url}\" target=\" blank\">{$url_name}</a>");
    }

    // Wikipedia lt
    if (!empty($wikipedialt)) {
        add_to_description("<a href=\"http://lt.wikipedia.org/wiki/{$wikipedialt}\" target=\" blank\">Vikipedija (LT)</a>");
    }

    // Wikipedia en
    if (!empty($wikipediaen)) {
        add_to_description("<a href=\"http://en.wikipedia.org/wiki/{$wikipediaen}\" target=\" blank\">Vikipedija (EN)</a>");
    }

    // Wikipedia default
    if (!empty($wikipedia)) {
        add_to_description("<a href=\"http://en.wikipedia.org/wiki/{$wikipedia}\" target=\" blank\">Vikipedija (EN)</a>");
    }

    // Height
    if (!empty($height)) {
        add_to_description("<i>Aukštis:</i> {$height}m.");
    }

    // Fee
    if (!empty($fee)) {
        if ($fee != "no") {
            add_to_description("<i>Apsilankymas mokamas</i>");
        } else {
            add_to_description("<i>Apsilankymas nemokamas</i>");
        }
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
    global $p_title, $p_description, $image;
    global $link;
    global $name, $operator, $description, $opening_hours, $city, $street, $housenumber,
           $information, $wikipedia, $wikipedialt, $wikipediaen, $phone, $email, $website,
           $height, $fee, $url, $image, $postcode; // tags
    // Contruct a query part filtering out only required POI's
    debug("poi type is " . $p_type);
    switch ($p_type) {
        case 'groupAttraction':
            $p_type = 'history|monument|tower|attraction|museum|information';
            break;
        case 'groupCamping':
            $p_type = 'camping|picnic_fireplace|picnic_nofireplace';
            break;
        case 'groupFood':
            $p_type = 'restaurant|cafe|pub|fast_food';
            break;
        case 'groupAccomodation':
            $p_type = 'hostel|hotel';
            break;
        case 'groupAuto':
            $p_type = 'fuel|speed_camera';
            break;
        case 'groupCulture':
            $p_type = 'theatre|cinema|arts';
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
                $filter = "historic in ('hill_fort', 'archaeological_site', 'castle', 'ruins')";
                $tp = 'HIS';
                break;
            case 'monument':
                $filter = "historic in ('monument', 'memorial')";
                $tp = 'MON';
                break;
            case 'tower':
                $filter = "man_made = 'tower' and \"tower:type\" = 'observation'";
                $tp = 'TOW';
                break;
            case 'attraction':
                // some historic poi's are also marked as attractions, those will not be fetched as "attractions"
                $filter = "tourism in ('attraction', 'viewpoint') and historic not in ('hill_fort', 'archaeological_site', 'castle', 'ruins', 'monument', 'memorial')";
                $tp = 'ATT';
                break;
            case 'museum':
                $filter = "tourism = 'museum'";
                $tp = 'MUS';
                break;
            case 'picnic_fireplace':
                $filter = "tourism = 'picnic_site' and fireplace = 'yes'";
                $tp = 'PIF';
                break;
            case 'picnic_nofireplace':
                $filter = "tourism = 'picnic_site' and (fireplace is null or fireplace = 'no')";
                $tp = 'PIC';
                break;
            case 'camping':
                $filter = "tourism = 'camp_site'";
                $tp = 'CAM';
                break;
            case 'hostel':
                $filter = "tourism in ('chalet', 'hostel', 'guest_house')";
                $tp = 'HOS';
                break;
            case 'fuel':
                $filter = "amenity = 'fuel'";
                $tp = 'FUE';
                break;
            case 'cafe':
                $filter = "amenity = 'cafe'";
                $tp = 'CAF';
                break;
            case 'fast_food':
                $filter = "amenity = 'fast_food'";
                $tp = 'FAS';
                break;
            case 'restaurant':
                $filter = "amenity = 'restaurant'";
                $tp = 'RES';
                break;
            case 'pub':
                $filter = "amenity in ('pub', 'bar')";
                $tp = 'PUB';
                break;
            case 'hotel':
                $filter = "tourism = 'hotel'";
                $tp = 'HOT';
                break;
            case 'information':
                $filter = "tourism = 'information'";
                $tp = 'INF';
                break;
            case 'theatre':
                $filter = "amenity = 'theatre'";
                $tp = 'THE';
                break;
            case 'cinema':
                $filter = "amenity = 'cinema'";
                $tp = 'CIN';
                break;
            case 'speed_camera':
                $filter = "highway = 'speed_camera'";
                $tp = 'SPE';
                break;
            case 'arts':
                $filter = "amenity = 'arts_centre'";
                $tp = 'ART';
                break;
            default:
                $filter = '1';
        }

        $query = "SELECT ST_X(ST_Transform(way,4326)) lat, ST_Y(ST_Transform(way,4326)) lon
                        ,name
                        ,operator
                        ,description
                        ,opening_hours
                        ,\"addr:city\"
                        ,\"addr:street\"
                        ,\"addr:housenumber\"
                        ,information
                        ,wikipedia
                        ,\"wikipedia:lt\"
                        ,\"wikipedia:en\"
                        ,phone
                        ,email
                        ,website
                        ,height
                        ,fee
                        ,url
                        ,image
                        ,\"addr:postcode\"
                        FROM planet_osm_point
                        WHERE way && ST_Transform(SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,4326), 900913)
                     AND {$filter}
                  union all
                  SELECT ST_X(ST_Transform(st_centroid(way),4326)) lat, ST_Y(ST_Transform(st_centroid(way),4326)) lon
                        ,name
                        ,operator
                        ,description
                        ,opening_hours
                        ,\"addr:city\"
                        ,\"addr:street\"
                        ,\"addr:housenumber\"
                        ,information
                        ,wikipedia
                        ,\"wikipedia:lt\"
                        ,\"wikipedia:en\"
                        ,phone
                        ,email
                        ,website
                        ,height
                        ,fee
                        ,url
                        ,image
                        ,\"addr:postcode\"
                        FROM planet_osm_polygon
                        WHERE way && ST_Transform(SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,4326), 900913)
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
            $name = $row[2];
            $operator = $row[3];
            $description = $row[4];
            $opening_hours = $row[5];
            $city = $row[6];
            $street = $row[7];
            $housenumber = $row[8];
            $information = $row[9];
            $wikipedia = $row[10];
            $wikipedialt = $row[11];
            $wikipediaen = $row[12];
            $phone = $row[13];
            $email = $row[14];
            $website = $row[15];
            $height = $row[16];
            $fee = $row[17];
            $url = $row[18];
            $image = $row[19];
            $postcode = $row[20];
            $default_title = "";
            switch($types[$i]) {
                case 'fuel':
                    $default_title = 'Kolonėlė';
                    break;
                case 'cafe':
                    $default_title = 'Kavinė';
                    break;
                case 'hotel':
                    $default_title = 'Viešbutis';
                    break;
                case 'hostel':
                    $default_title = 'Kaimo sodyba';
                    break;
                case 'picnic_nofireplace':
                    $default_title = 'Poilsiavietė';
                    break;
                case 'picnic_fireplace':
                    $default_title = 'Poilsiavietė su laužu';
                    break;
                case 'pub':
                    $default_title = 'Aludė';
                    break;
                case 'camping':
                    $default_title = 'Kempingas';
                    break;
                case 'museum':
                    $default_title = 'Muziejus';
                    break;
                case 'information':
                    $default_title = 'Informacija';
                    break;
                default:
                    $default_title = 'Nežinomas taškas';
            }
            assemble_title($default_title);
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
                    'image' => $image,
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

// respond to preflights
if ($_SERVER['REQUEST_METHOD'] == 'OPTIONS') {
    // return only the headers and not the content
    // only allow CORS if we're doing a GET - i.e. no saving for now.
    if (isset($_SERVER['HTTP_ACCESS_CONTROL_REQUEST_METHOD']) &&
              $_SERVER['HTTP_ACCESS_CONTROL_REQUEST_METHOD'] == 'GET') {
        header('Access-Control-Allow-Origin: *');
        header('Access-Control-Allow-Headers: X-Requested-With');
    }
    exit;
}else{ //simple scenario without preflight
    header('Access-Control-Allow-Origin: *');
}

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
