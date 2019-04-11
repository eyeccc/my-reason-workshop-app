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
      placeholder="Filter by name..."
      onChange={event => ReactEvent.Form.target(event)##value |> setName}
    />
    <Places data=Data.places->search(name) />
  </div>;
};