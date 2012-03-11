<?php
/*****************************************************************
 * Parameters:
 *  debug=yes|no - turn on debugging (default=no)
 *  bbox=L,B,R,T - bounding box in EPSG:4326
 *  format=(geojson|kml)
 *  type=history|monument|tower|attraction|picnic_fireplace|picnic_nofireplace|camping|cafe|restaurant|pub|hotel|hostel|fuel
 *       groupAttraction| (castles, hillforts, museums, parks and other attractions)
 *       groupCamping| (camping, picnic palces etc.)
 *       groupFood| (cafes, restaurants, pubs, bars etc.)
 *       groupAccomodation| (hotels, hostels etc.)
 *       groupAuto (fuel, garages etc.)
 ****************************************************************/

/***************************************************************
 * Print out debug information. This print out something only
 * if called with an parameter debug=yes
 ***************************************************************/
function debug($txt) {
    if (DEBUG) {
        echo $txt, PHP_EOL;
    }
} // debug

/**********************************************************************
 * Assemble html title for a poi using a prefetched tag info
 * function parse_tags should have been called before calling this one.
 * Title of a POI would be taken from a name tag, but if that one is
 * empty, then a given default value would be used. Default value
 * would usually specify type of POI (fuel, cafe, restaurant etc.)
 **********************************************************************/
function assemble_title(array &$row, $default)
{
    $row['name'] = trim($row['name']);
    if (empty($row['name'])) {
        $row['name'] = $default;
    }
    debug("Title=" . $row['name']);
} // assemble_title

/***********************************************************************
 * Assemble html description for a poi using a prefetched tag info
 * function parse_tags should have been called before calling this one.
 **********************************************************************/
function assemble_description(array &$row)
{
    extract($row);
    $description = array();
    
    if(!empty($row['description'])){
        $description[] = $row['description'];
    }
    
    // Information
    if (!empty($information)) {
        $description[] = $information;
    }

    // Working time
    if (!empty($opening_hours)) {
        $description[] = "<i>Darbo laikas:</i> {$opening_hours}";
    }

    // Address
    if (!empty($city) || !empty($street) || !empty($housenumber)) {
        $description[] = "<i>Adr:</i> {$city} {$postcode} {$street} {$housenumber}";
    }

    // Phone
    if (!empty($phone)) {
        $description[] = "<i>Tel:</i> {$phone}";
    }

    // E-mail
    if (!empty($email)) {
        $description[] = "<i>E-paštas:</i> {$email}";
    }

    // Website (according to OSM wiki url tag is deprecated, website tag should be used)
    if (!empty($website) && strpos($website, 'http') !== 0) {
        $website = 'http://' . $website;
    }
    if (!empty($website)) {
        if (strlen($website) > 30) {
            $url_name = 'Svetainė';
        } else {
            $url_name = $website;
        }
        $description[] = "<a href=\"{$website}\" target=\" blank\">{$url_name}</a>";
    }

    // Website (according to OSM wiki url tag is deprecated, website tag should be used)
    if (!empty($url) && strpos($url, 'http') !== 0) {
        $url = 'http://' . $url;
    }
    if (!empty($url)) {
        if (strlen($url) > 30) {
            $url_name = "Svetainė";
        } else {
            $url_name = $url;
        }
        $description[] = "<a href=\"{$url}\" target=\" blank\">{$url_name}</a>";
    }

    // Wikipedia lt
    if (!empty($wikipedia_lt)) {
        $description[] = "<a href=\"http://lt.wikipedia.org/wiki/{$wikipedia_lt}\" target=\" blank\">Vikipedija (LT)</a>";
    }

    // Wikipedia en
    if (!empty($wikipedia_en)) {
        $description[] = "<a href=\"http://en.wikipedia.org/wiki/{$wikipedia_en}\" target=\" blank\">Vikipedija (EN)</a>";
    }

    // Wikipedia default
    if (!empty($wikipedia)) {
        $description[] = "<a href=\"http://en.wikipedia.org/wiki/{$wikipedia}\" target=\" blank\">Vikipedija (EN)</a>";
    }

    // Height
    if (!empty($height)) {
        $description[] = "<i>Aukštis:</i> {$height}m.";
    }

    // Fee
    if (!empty($fee)) {
        if ($fee != 'no') {
            $description[] = "<i>Apsilankymas mokamas</i>";
        } else {
            $description[] = "<i>Apsilankymas nemokamas</i>";
        }
    }
    
    //TODO: html tags should be added in client side, depending on use case
    if(!empty($description)){
        $description = '<p>' . implode('<br>', $description) . '</p>';
    }else{
        $description = '';
    }
    $row['description'] = $description;

    debug("Description=". $description);
} // assemble_description

/*************************************************************
 * Fetch poi information for a given bbox
 * @left, @top, @right, @bottom - bbox boundaries
 * @type:
 *   fuel - amenity=fuel
 *   cafe - amenity=cafe
 *   hotel - tourism=hotel
 ************************************************************/
function fetch_poi($left, $top, $right, $bottom, $p_type, Poi_Format_Abstract $format)
{
    global $link;
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
            $p_type = 'theatre|cinema|arts|library';
            break;
    }
    $types = explode("|", $p_type);
    if (!is_array($types) or count($types) == 0) {
        debug("ERROR: Incorrect type parameter");
        die;
    }
    $id = 0;
    $i = 0;
    while ($i < count($types)) {
        debug("processing type=" . $types[$i]);

        switch($types[$i]) {
            case 'history':
                $filter = "historic is not null and historic not in ('monument', 'memorial')";
                $default_title = 'Istorinė vieta';
                $tp = 'HIS';
                break;
            case 'monument':
                $filter = "historic in ('monument', 'memorial')";
                $default_title = 'Paminklas';
                $tp = 'MON';
                break;
            case 'tower':
                $filter = "man_made = 'tower' and \"tower:type\" = 'observation'";
                $default_title = 'Bokštas';
                $tp = 'TOW';
                break;
            case 'attraction':
                // some historic poi's are also marked as attractions, those will not be fetched as "attractions"
                $filter = "tourism in ('attraction', 'viewpoint') and historic is null";
                $default_title = 'Lankytina vieta';
                $tp = 'ATT';
                break;
            case 'museum':
                $filter = "tourism = 'museum'";
                $default_title = 'Muziejus';
                $tp = 'MUS';
                break;
            case 'picnic_fireplace':
                $filter = "tourism = 'picnic_site' and fireplace = 'yes'";
                $default_title = 'Poilsiavietė su laužu';
                $tp = 'PIF';
                break;
            case 'picnic_nofireplace':
                $filter = "tourism = 'picnic_site' and (fireplace is null or fireplace = 'no')";
                $default_title = 'Poilsiavietė';
                $tp = 'PIC';
                break;
            case 'camping':
                $filter = "tourism = 'camp_site'";
                $default_title = 'Kempingas';
                $tp = 'CAM';
                break;
            case 'hostel':
                $filter = "tourism in ('chalet', 'hostel', 'guest_house')";
                $default_title = 'Kaimo sodyba';
                $tp = 'HOS';
                break;
            case 'fuel':
                $filter = "amenity = 'fuel'";
                $default_title = 'Kolonėlė';
                $tp = 'FUE';
                break;
            case 'cafe':
                $filter = "amenity = 'cafe'";
                $default_title = 'Kavinė';
                $tp = 'CAF';
                break;
            case 'fast_food':
                $filter = "amenity = 'fast_food'";
                $tp = 'FAS';
                break;
            case 'restaurant':
                $filter = "amenity = 'restaurant'";
                $default_title = 'Restoranas';
                $tp = 'RES';
                break;
            case 'pub':
                $filter = "amenity in ('pub', 'bar')";
                $default_title = 'Aludė';
                $tp = 'PUB';
                break;
            case 'hotel':
                $filter = "tourism = 'hotel'";
                $default_title = 'Viešbutis';
                $tp = 'HOT';
                break;
            case 'information':
                $filter = "tourism = 'information'";
                $default_title = 'Informacija';
                $tp = 'INF';
                break;
            case 'theatre':
                $filter = "amenity = 'theatre'";
                $default_title = 'Teatras';
                $tp = 'THE';
                break;
            case 'cinema':
                $filter = "amenity = 'cinema'";
                $default_title = 'Kino teatras';
                $tp = 'CIN';
                break;
            case 'speed_camera':
                $filter = "highway = 'speed_camera'";
                $default_title = 'Greičio kamera';
                $tp = 'SPE';
                break;
            case 'arts':
                $filter = "amenity = 'arts_centre'";
                $tp = 'ART';
                break;
            case 'library':
                $filter = "amenity = 'library'";
                $default_title = 'Biblioteka';
                $tp = 'LIB';
                break;
            default:
                continue;
        }
        $fields = 'osm_id id,name,operator
                        ,description
                        ,opening_hours
                        ,"addr:city" city
                        ,"addr:street" street
                        ,"addr:housenumber" housenumber
                        ,"addr:postcode" postcode
                        ,information
                        ,wikipedia
                        ,"wikipedia:lt" wikipedia_lt
                        ,"wikipedia:en" wikipedia_en
                        ,phone
                        ,email
                        ,website
                        ,height
                        ,fee
                        ,url
                        ,image';
        $query = "SELECT ST_X(ST_Transform(way,4326)) lat, ST_Y(ST_Transform(way,4326)) lon, {$fields}
                        FROM planet_osm_point
                        WHERE way && ST_Transform(SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,4326), 900913)
                     AND {$filter}
                  union all
                  SELECT ST_X(ST_Transform(st_centroid(way),4326)) lat, ST_Y(ST_Transform(st_centroid(way),4326)) lon, {$fields}
                        FROM planet_osm_polygon
                        WHERE way && ST_Transform(SetSRID('BOX3D({$left} {$top},{$right} {$bottom})'::box3d,4326), 900913)
                     AND {$filter}";
        debug('Query is: ' . $query);
        $res = pg_query($link, $query);
        if (!$res) {
            throw new Exception(pg_last_error($link));
            exit;
        }

        while ($row = pg_fetch_assoc($res)) {
            debug("lat:" . $row['lat'] . ", lon:" . $row['lon'] . ", tags:" . $row['name']);
            $row['tp'] = $tp;
            $row['type'] = $types[$i];
            // process title & description
            assemble_title($row, $default_title);
            assemble_description($row);
            // add data to formated output
            $format->addRow($row);
            $id++;
        }
        $i++;
    } // while loop through all type values
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

// Check the type of poi to be fetched
$type = $_GET["type"];
if ($type === null) {
    $type = "fuel"; // default poi type is fuel
}

// Result format (geojson|kml)
$formats = array('geojson', 'kml');
$format = trim($_GET['format']);
if (empty($format)) {
    $format = 'geojson'; // default format is geoJSON
}
if(!in_array($format, $formats)){
    die('Format not supported');
}

$bbox = (object)compact('left', 'bottom', 'right', 'top');
$format = 'Poi_Format_' . ucfirst(strtolower($format));
$format = new $format($bbox);

//limit request to 1 square degree
if(abs($top - $bottom) * abs($right - $left) > 1){
    debug('Requests are limited to 1 square degree');
    $format->output();
    die;
}

$config = require './config.php';
$link = pg_connect(vsprintf('host=%s port=%u dbname=%s user=%s password=%s', $config['resource']['db']));
if (!$link) {
    debug('Cannot connect to database');
    die;
}

fetch_poi($left, $top, $right, $bottom, $type, $format);
$format->output();

pg_close($link);

/**
 * Class files
 */
abstract class Poi_Format_Abstract
{
    const FORMAT_GEOJSON    = 'geojson';
    const FORMAT_KML        = 'kml';
    /**
     * Data array
     * @var array
     */
    protected $_data = array();
    
    protected $_bbox;
    
    public function __construct($bbox = null)
    {
        $this->_bbox = $bbox;
    }
    
    /**
     * Output formated data
     * @return string
     */
    abstract public function output();
    
    /**
     * Add row to formated output
     * @param array $row
     */
    public function addRow(array $row)
    {
        // convert to object
        $row = (object)$row;
        $row->id = (int)$row->id;
        $row->lat = (float)$row->lat;
        $row->lon = (float)$row->lon;
        $this->_data[$row->id] = $row;
    }
}

class Poi_Format_Geojson extends Poi_Format_Abstract
{
    public function output()
    {
        $features = array();
        foreach($this->_data as $row){
            // add data to future json
            $latlon = array($row->lat, $row->lon);
        
            $features[] = array(
                'geometry' => array(
                    'type' => 'Point',
                    'coordinates' => $latlon,
                ),
                'type' => 'Feature',
                'properties' => array(
                    'tp' => $row->tp, // @deprecated: property name confusing
                    'type' => $row->type,
                    'title' => $row->name,
                    'description' => $row->description,
                	'image' => $row->image,
                ),
                'id' => $row->id,
            );
        }
        @header('Content-type: application/json; charset=UTF-8');
        echo json_encode(array(
        	'type' => 'FeatureCollection',
            'bbox' => array($this->_bbox->left, $this->_bbox->bottom, $this->_bbox->right, $this->_bbox->top),
            'features' => $features,
        ));
    }
}

class Poi_Format_Kml extends Poi_Format_Abstract
{
    public function output()
    {
        // Creates the KML/XML Document.
        $dom = new DOMDocument('1.0', 'UTF-8');

        // Creates the root KML element and appends it to the root document.
        $kml = $dom->createElementNS('http://www.opengis.net/kml/2.2', 'kml');
        $dom->appendChild($kml);

        // Creates a KML Document element and append it to the KML element.
        $document = $dom->createElement('Document');
        $kml->appendChild($document);
        
        foreach($this->_data as $row){
            // Creates a Placemark and append it to the Document.
            $placemark = $dom->createElement('Placemark');
            $document->appendChild($placemark);

            // Creates an id attribute and assign it the value of id column.
            $placemark->setAttribute('id', 'placemark' . $row->id);

            // Create name, and description elements and assigns them the values of the name and address columns from the results.
            $name = $dom->createElement('name', $row->title . $row->description);
            $placemark->appendChild($name);

            // Creates a Point element.
            $point = $dom->createElement('Point');
            $placemark->appendChild($point);

            // Creates a coordinates element and gives it the value of the lng and lat columns from the results.
            $coorNode = $dom->createElement('coordinates', $row->lat . ','  . $row->lon);
            $point->appendChild($coorNode);
        }
        
        @header('Content-type: application/vnd.google-earth.kml+xml; charset=UTF-8');
        echo $dom->saveXML();
    }
}

