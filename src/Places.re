[@react.component]
let make = (~data: list(Data.place)) =>
  data
  ->Belt.List.map(it
      /* can also write (it: Data.place) to fix inference*/
      =>
        <div
          key={it.id}
          style={
            ReactDOMRe.Style.make(
              ~width="420px",
              ~height="280px",
              ~backgroundImage="url(" ++ it.image.url ++ ")",
              ~backgroundSize="420px 280px",
              ~backgroundRepeat="no-repeat",
              ~color="white",
              ~padding="20px 20px",
              ~marginBottom="20px",
              (),
            )
          }>
          {ReasonReact.string(it.name)}
        </div>
      )
  |> Belt.List.toArray
  |> ReasonReact.array;