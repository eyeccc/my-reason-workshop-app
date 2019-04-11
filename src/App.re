/*open Emotion

  let input = [%css [
    width (`px 410);
    height (`px 32);
    paddingLeft (`px 8);
    marginBottom
  ]]*/

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
  switch (url.hash) {
  | "taipei-101" => <Detail data=Data.taipei101 />
  | "lungshan-temple" => <Detail data=Data.temple />
  | "nightmarket" => <Detail data=Data.nightMarket />
  | _ =>
    <div style={ReactDOMRe.Style.make(~width="50%", ~margin="auto", ())}>
      <h1> {ReasonReact.string("Taipei")} </h1>
      <input
        style={
          ReactDOMRe.Style.make(
            ~width="410px",
            ~height="32px",
            ~paddingLeft="8px",
            ~marginBottom="20px",
            (),
          )
        }
        value=name
        placeholder="Filter by name or tags..."
        onChange=(event => ReactEvent.Form.target(event)##value |> setName)
      />
      <Places data=Data.places->search(name) />
    </div>
  };
};