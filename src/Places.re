[@react.component]
let make = (~data: list(Data.place)) =>
  data
  ->Belt.List.map(it
      /* can also write (it: Data.place) to fix inference*/
      =>
        <a href={"#" ++ it.route}>
          <div
            key={it.id}
            style={
              ReactDOMRe.Style.make(
                /* TODO: change to classname */
                ~width="420px",
                ~height="280px",
                ~backgroundImage="url(" ++ it.image.url ++ ")",
                ~backgroundSize="420px 280px",
                ~backgroundRepeat="no-repeat",
                ~color="white",
                ~padding="20px 20px",
                ~marginBottom="20px",
                ~position="relative",
                (),
              )
            }>
            {ReasonReact.string(it.name)}
            <div
              style={
                ReactDOMRe.Style.make(
                  ~position="absolute",
                  ~bottom="50px",
                  ~right="50px",
                  (),
                )
              }>
              {
                Belt.Array.map(it.tags, it =>
                  <span
                    key=it
                    style={
                      ReactDOMRe.Style.make(
                        ~backgroundColor="grey",
                        ~color="white",
                        ~padding="2px 2px 2px 2px",
                        ~opacity="0.7",
                        ~borderRadius="5px",
                        ~marginRight="8px",
                        (),
                      )
                    }>
                    {it |> ReasonReact.string}
                  </span>
                )
                |> ReasonReact.array
              }
            </div>
          </div>
        </a>
      )
  |> Belt.List.toArray
  |> ReasonReact.array;