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
  route: string,
};
let taipei101 = {
  id: "4403cc1a-5d5e-4737-8001-0d3f784d87ae",
  name: "Taipei 101",
  route: "taipei-101",
  image: {
    url: "https://images.unsplash.com/photo-1549001364-6495e461f87c?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2850&q=80",
    attribution: "Timo Volz",
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
  description: "Taipei 101, sometimes stylized TAIPEI 101, formerly known as the Taipei World Financial Center - is a landmark supertall skyscraper in Xinyi District, Taipei, Taiwan. The building was officially classified as the world's tallest from its opening in 2004 until the 2010 completion of the Burj Khalifa in Dubai. Its elevators, capable of 60.6 km/h (37.7 mph) to transport passengers from the 5th to 89th floor in 37 seconds, set new records. In 2011 Taipei 101 received a Platinum rating under the LEED certification system to become the tallest and largest green building in the world. The structure regularly appears as an icon of Taipei in international media, and its fireworks displays are a regular feature of New Year's Eve broadcasts.",
};

let nightMarket = {
  id: "f185c339-eb12-4223-8996-4ba9bfff935b",
  name: "Raohe Night Market",
  route: "nightmarket",
  image: {
    url: "https://images.unsplash.com/photo-1552912810-e184f878293e?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1466&q=80",
    attribution: "Vernon Raineil Cenzon",
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
};

let temple = {
  id: "1ef49b28-98b1-47e9-bcea-f54754c9c63a",
  name: "Lungshan Temple",
  route: "lungshan-temple",
  image: {
    url: "https://images.unsplash.com/photo-1535139262971-c51845709a48?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2850&q=80",
    attribution: "Charles Postiaux",
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
};

let teapotMt = {
  id: "b2efbaca-9810-49a3-9de3-918098dbb510",
  name: "Teapot Mountain",
  route: "teapotMt",
  image: {
    url: "https://images.unsplash.com/photo-1512990419428-7a0eee50a9a1?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=2853&q=80",
    attribution: "Andrew Haimerl",
    attributionUrl: Some("https://unsplash.com/@andrew_haimerl"),
  },
  address: "224, New Taipei City, Ruifang District",
  phone: None,
  email: None,
  coordinates: {
    lat: 25.1095149,
    lng: 121.8620051,
  },
  tags: [|"nature", "hiking"|],
  description: "
This strangely shaped hill, as its name suggests, looks like a teapot without a handle,
sometimes referred to as the \"Tea Hill\", but in another angle,
it looks like a lion, so it is also called \"Lion Rock Mountain\".
It is not high and the top of the mountain is not large, but after climbing the teapot mountain,
the surrounding Yinyang Sea, Keelung Mountain, Shuiyu Cave and Jinguashi are all unobstructed.
If you want to look carefully at the northeast coast, this is a great place.
Every step of the earless teapot has an amazing scenery, and there are also many pavilions along the way, allowing people to enjoy the beauty of the mountains and the sea.
Every autumn and winter is the most popular season for the earless teapot mountain trail, with the warm sunshine, the cool atmosphere and the silvergrass flowers in the mountains.",
};

let places = [taipei101, temple, nightMarket, teapotMt];