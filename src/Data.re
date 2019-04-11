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
  tags: array(string),
  description: string,
};

let places = [
  {
    id: "4403cc1a-5d5e-4737-8001-0d3f784d87ae",
    name: "Taipei 101",
    image: {
      url: "https://images.unsplash.com/photo-1549001364-6495e461f87c?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2850&q=80",
      attribution: "by Timo Volz",
      attributionUrl: Some("https://unsplash.com/@magict1911"),
    },
    address: "No. 7, Section 5, Xinyi Road, Xinyi District, Taipei City, Taiwan 110",
    phone: None,
    email: None,
    coordinates: {
      lat: 25.033611,
      lng: 121.565,
    },
    tags: [|"101"|],
    description: "Taipei 101, sometimes stylized TAIPEI 101[1], formerly known as the Taipei World Financial Center – is a landmark supertall skyscraper in Xinyi District, Taipei, Taiwan. The building was officially classified as the world's tallest from its opening in 2004 until the 2010 completion of the Burj Khalifa in Dubai. Its elevators, capable of 60.6 km/h (37.7 mph) to transport passengers from the 5th to 89th floor in 37 seconds, set new records.[9] In 2011 Taipei 101 received a Platinum rating under the LEED certification system to become the tallest and largest green building in the world.[10][11] The structure regularly appears as an icon of Taipei in international media, and its fireworks displays are a regular feature of New Year's Eve broadcasts.",
  },
  {
    id: "1ef49b28-98b1-47e9-bcea-f54754c9c63a",
    name: "Lungshan Temple",
    image: {
      url: "https://images.unsplash.com/photo-1535139262971-c51845709a48?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2850&q=80",
      attribution: "by Charles Postiaux",
      attributionUrl: Some("https://unsplash.com/@charlpost"),
    },
    address: "No. 211, Guangzhou Street, Wanhua District, Taipei City, Taiwan 10853",
    phone: Some("+886-2-2302-5162"),
    email: None,
    coordinates: {
      lat: 25.037222,
      lng: 121.499444,
    },
    tags: [|"traditional"|],
    description: "Mengjia Longshan Temple is a Chinese folk religious temple in Wanhua District (formerly known as Mengjia), Taipei, Taiwan. The temple was built in Taipei in 1738 by settlers from Fujian during Qing rule in honor of Guanyin. It served as a place of worship and a gathering place for the Chinese settlers. In addition to its Buddhist elements, it includes halls and altars to Chinese deities such as Mazu and Guan Yu.",
  },
  {
    id: "f185c339-eb12-4223-8996-4ba9bfff935b",
    name: "Raohe Night Market",
    image: {
      url: "https://images.unsplash.com/photo-1552912810-e184f878293e?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1466&q=80",
      attribution: "by Vernon Raineil Cenzon",
      attributionUrl: Some("https://unsplash.com/@thevernon"),
    },
    address: "Raohe Street, Songshan District, Taipei City, Taiwan 105",
    phone: None,
    email: None,
    coordinates: {
      lat: 25.050167,
      lng: 121.572639,
    },
    tags: [|"eat", "food"|],
    description: "The Raohe Street Night Market is one of the oldest night markets in Songshan District, Taipei, Taiwan.",
  },
  /*{
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
    },*/
];