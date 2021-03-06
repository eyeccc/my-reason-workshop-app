/*Create a file Data.re and inside create a list of places with the following properties

  id (generate uuids via https://www.uuidgenerator.net/ and copy & paste them in your code)
  name
  description
  image containing an url, attribution and attributionUrl (optional)
  address
  phone (optional)
  email (optional)
  coordinates containing lat and lng*/

type coord = {
  lat: float,
  lng: float,
};

type image = {
  url: string,
  attribution: string,
  attributionUrl: option(string),
};
type place = {
  id: string,
  name: string,
  image,
  address: string,
  phone: option(string),
  email: option(string),
  coordinates: coord,
};

let places = [
  {
    id: "4403cc1a-5d5e-4737-8001-0d3f784d87ae",
    name: "Taipei 101",
    image: {
      url: "https://images.app.goo.gl/zN8sQMdGzghH6yNPA",
      attribution: "omit for now",
      attributionUrl: None,
    },
    address: "No. 7, Section 5, Xinyi Road, Xinyi District, Taipei City, Taiwan 110",
    phone: None,
    email: None,
    coordinates: {
      lat: 25.033611,
      lng: 121.565,
    },
  },
  {
    id: "1ef49b28-98b1-47e9-bcea-f54754c9c63a",
    name: "Lungshan Temple",
    image: {
      url: "https://images.app.goo.gl/wkChMSvcehvhascP6",
      attribution: "omit for now",
      attributionUrl: None,
    },
    address: "No. 211, Guangzhou Street, Wanhua District, Taipei City, Taiwan 10853",
    phone: Some("+886-2-2302-5162"),
    email: None,
    coordinates: {
      lat: 25.037222,
      lng: 121.499444,
    },
  },
  {
    id: "f185c339-eb12-4223-8996-4ba9bfff935b",
    name: "Raohe Night Market",
    image: {
      url: "https://en.wikipedia.org/wiki/Raohe_Street_Night_Market#/media/File:East_Entrance_of_Raohe_Street_Night_Market_20060118_night.jpg",
      attribution: "omit for now",
      attributionUrl: None,
    },
    address: "Raohe Street, Songshan District, Taipei City, Taiwan 105",
    phone: None,
    email: None,
    coordinates: {
      lat: 25.050167,
      lng: 121.572639,
    },
  },
  {
    id: "51641447-c00e-4543-823b-f5a19864a47c",
    name: "Thermal Valley",
    image: {
      url: "https://images.app.goo.gl/tacrmCwEFn8RFrBu6",
      attribution: "omit for now",
      attributionUrl: None,
    },
    address: "Wenquan Road, Beitou District, Taipei City, Taiwan 112",
    phone: Some("+886-2-2888-2118"),
    email: None,
    coordinates: {
      lat: 25.1379192,
      lng: 121.5096927,
    },
  },
];