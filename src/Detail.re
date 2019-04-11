[@react.component]
let make = (~data: Data.place) =>
  <div>
    <h1> {ReasonReact.string(data.name)} </h1>
    <img src={data.image.url} />
    <p> {ReasonReact.string(data.description)} </p>
  </div>;