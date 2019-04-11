[@react.component]
let make = (~data: Data.place) =>
  <div>
    <a href="#"> {"Back" |> ReasonReact.string} </a>
    <h1> {ReasonReact.string(data.name)} </h1>
    <img
      style={ReactDOMRe.Style.make(~width="500px", ())}
      src={data.image.url}
    />
    <p> {ReasonReact.string(data.description)} </p>
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