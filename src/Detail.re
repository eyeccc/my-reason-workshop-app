[@react.component]
let make = (~data: Data.place) =>
  <div style={ReactDOMRe.Style.make(~width="50%", ~margin="auto", ())}>
    <a href="#"> {"Back" |> ReasonReact.string} </a>
    <h1> {ReasonReact.string(data.name)} </h1>
    <img
      style={ReactDOMRe.Style.make(~width="500px", ())}
      src={data.image.url}
    />
    <footer>
      {"photo credit: " |> ReasonReact.string}
      <a href={Belt.Option.getWithDefault(data.image.attributionUrl, "")}>
        {data.image.attribution |> ReasonReact.string}
      </a>
    </footer>
    <p style={ReactDOMRe.Style.make(~width="500px", ())}>
      {ReasonReact.string(data.description)}
    </p>
    <a
      target="_blank"
      href={
        "https://www.google.com/maps/search/?api=1&query="
        ++ Js.Float.toString(data.coordinates.lat)
        ++ ","
        ++ Js.Float.toString(data.coordinates.lng)
      }>
      {data.address |> ReasonReact.string}
    </a>
  </div>;