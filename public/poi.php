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

/***************************************************************
 * Explode a single CSV string (line) into an array.
 * Is more intelligent than simple "explode" - handles quotes
 * and commas inside quoted strings
 ***************************************************************/
function csvexplode($str, $delim = ',', $qual = "\"")
{
    $len = strlen($str);  // Store the complete length of the string for easy reference.
    $inside = false;  // Maintain state when we're inside quoted elements.
    $lastWasDelim = false;  // Maintain state if we just started a new element.
    $word = '';  // Accumulator for current element.

    for($i = 0; $i < $len; ++$i) {
        // We're outside a quoted element, and the current char is a field delimiter.
        if(!$inside && $str[$i]==$delim) {
            $out[] = $word;
            $word = '';
            $lastWasDelim = true;
        } 

        // We're inside a quoted element, the current char is a qualifier, and the next char is a qualifier.
        elseif($inside && $str[$i]==$qual && ($i<$len && $str[$i+1]==$qual)) {
            $word .= $qual;  // Add one qual into the element,
            ++$i; // Then skip ahead to the next non-qual char.
        }

        // The current char is a qualifier (so we're either entering or leaving a quoted element.)
        elseif ($str[$i] == $qual) {
            $inside = !$inside;
        }

        // We're outside a quoted element, the current char is whitespace and the 'last' char was a delimiter.
        elseif( !$inside && ($str[$i]==" ")  && $lastWasDelim) {
            // Just skip the char because it's leading whitespace in front of an element.
        }

        // Outside a quoted element, the current char is whitespace, the "next" char is a delimiter.
        elseif(!$inside && ($str[$i]==" ") ) {
            // Look ahead for the next non-whitespace char.
            $lookAhead = $i+1;
            while(($lookAhead < $len) && ($str[$lookAhead] == " ")) {
                ++$lookAhead;
            }

            // If the next char is formatting, we're dealing with trailing whitespace.
            if($str[$lookAhead] == $delim || $str[$lookAhead] == $qual) {
                $i = $lookAhead-1;  // Jump the pointer ahead to right before the delimiter or qualifier.
            }

            // Otherwise we're still in the middle of an element, so add the whitespace to the output.
            else {
                $word .= $str[$i];  
            }
        }

        // If all else fails, add the character to the current element.
        else {
            $word .= $str[$i];
            $lastWasDelim = false;
        }
    }

    $out[] = $word;
    return $out;
} // csvexplode

/************************************************************
 * Parse tags in a given string
 ************************************************************/
function parse_tags($tagstr)
{
    $fields = array('name', 'operator', 'description', 'opening_hours', 'city', 'street', 'housenumber',
         'phone', 'email', 'website', 'wikipedia', 'wikipedialt', 'notes', 'height', 'fee',
         'information', 'wikipediaen', 'phone', 'url' /* deprecated tag, website should be used*/);
    $tags = trim($tagstr, '{}');
    $tags = csvexplode($tags);
    for($i = 0, $cnt = count($tags);$i < $cnt; $i += 2){
        $key = $tags[$i];
        $value = $tags[$i + 1];
        $tags[$key] = $value;
        unset($tags[$i], $tags[$i + 1]);
    }
    foreach ($fields as $field){
        $GLOBALS[$field] = '';
        switch($field){
            case 'city':
            case 'street':
            case 'housenumber':
                $GLOBALS[$field] = $tags['addr:' . $field];
                break;
            case 'wikipedialt':
                $GLOBALS['wikipedialt'] = $tags['wikipedia:lt'];
                break;
            case 'wikipediaen':
                $GLOBALS['wikipediaen'] = $tags['wikipedia:en'];
                break;
            default:
                $GLOBALS[$field] = @$tags[$field];
        }
    }
} // parse_tags

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
         $height, $fee, $url; // tags
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
        add_to_description("<i>Adr:</i> {$city} {$street} {$housenumber}");
    }

    // Phone
    if (!empty($phone)) {
        add_to_description("<i>Tel:</i> {$phone}");
    }

    // E-mail
    if (!empty($email)) {
        add_to_description("<i>Tel:</i> {$email}");
    }

    // Website (according to OSM wiki url tag is deprecated, website tag should be used)
    if (!empty($website)) {
        add_to_description("<a href=\"{$website}\" target=\" blank\">Svetainė</a>");
    }

    // Website (according to OSM wiki url tag is deprecated, website tag should be used)
    if (!empty($url)) {
        add_to_description("<a href=\"{$url}\" target=\" blank\">Svetainė</a>");
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
    global $p_title, $p_description;
    global $link;
    // Contruct a query part filtering out only required POI's
    debug("poi type is " . $p_type);
    switch ($p_type) {
        case 'groupAttraction':
            $p_type = 'history|monument|tower|attraction|museum';
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
            case 'museum':
                $filter = "p.tourism = 'museum'";
                $tp = 'MUS';
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
                $filter = "p.tourism in ('chalet', 'hostel', 'guest_house')";
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
			WHERE p.way && ST_Transform(SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,4326), 900913)
                     AND {$filter}
                  union all
                  SELECT ST_X(ST_Transform(st_centroid(way),4326)) lat, ST_Y(ST_Transform(st_centroid(way),4326)) lon, n.tags
			FROM planet_osm_polygon p
			LEFT JOIN planet_osm_ways n ON n.id = p.osm_id
			WHERE p.way && ST_Transform(SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,4326), 900913)
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
