module Styles = {
  open Emotion;

  let searchBar = [%css
    [
      width(`px(410)),
      height(`px(32)),
      paddingLeft(`px(8)),
      marginBottom(`px(20)),
    ]
  ];
};

let getPlace = route => Data.places->Belt.List.getBy(p => p.route == route);

let search = (searchList, term) =>
  searchList
  ->Belt.List.keep(it =>
      Js.String.includes(
        Js.String.toLowerCase(term),
        Js.String.toLowerCase(it.Data.name),
      )
      || it.Data.tags
         ->Belt.Array.keep(it => it == Js.String.toLowerCase(term))
         ->Belt.Array.length
      > 0
    );

[@react.component]
let make = () => {
  let (name, setName) = React.useState(() => "");
  let url = ReasonReactRouter.useUrl();
  let currentRoute = getPlace(url.hash);
  switch (currentRoute) {
  | Some(data) => <Detail data />
  | None =>
    <div style={ReactDOMRe.Style.make(~width="50%", ~margin="auto", ())}>
      <h1> {ReasonReact.string("Taipei")} </h1>
      <input
        className=Styles.searchBar
        value=name
        placeholder="Filter by name or tags..."
        onChange=(event => ReactEvent.Form.target(event)##value |> setName)
      />
      <Places data=Data.places->search(name) />
    </div>
  };
};