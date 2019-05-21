module Styles = {
  open Emotion;

  let placeBlock = [%css
    [
      width(`px(420)),
      height(`px(280)),
      marginBottom(`px(20)),
      padding2(`px(20), `px(20)),
      position(`relative),
      color(`hex("fff")),
    ]
  ];

  let tags = [%css
    [
      backgroundColor(`hex("808080")),
      opacity(0.7),
      marginRight(`px(8)),
      padding4(`px(2), `px(2), `px(2), `px(2)),
      color(`hex("fff")),
      borderRadius(`px(5)),
    ]
  ];

  let tagWrapper = [%css
    [position(`absolute), bottom(`px(50)), right(`px(50))]
  ];
};

[@react.component]
let make = (~data: list(Data.place)) =>
  data
  ->Belt.List.map(it
      /* can also write (it: Data.place) to fix inference*/
      =>
        <a key={it.id} href={"#" ++ it.route}>
          <div
            key={it.id}
            className=Styles.placeBlock
            style={
              ReactDOMRe.Style.make(
                ~backgroundImage="url(" ++ it.image.url ++ ")",
                ~backgroundSize="420px 280px",
                ~backgroundRepeat="no-repeat",
                (),
              )
            }>
            {ReasonReact.string(it.name)}
            <div className=Styles.tagWrapper>
              {
                Belt.Array.map(it.tags, it =>
                  <span key=it className=Styles.tags>
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