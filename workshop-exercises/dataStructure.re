type color =
  | Black
  | White;
type position = (string, int); /*maybe be more strict by using type row = A | B | C;...*/
type chessValue =
  | King
  | Tower
  | Pawn; /*should list all posible values*/
/* in german they call knight as horse! so save their life ya */

type chess = {
  color,
  position,
  value: chessValue,
};
/*
 Figure 1: Black, King, on position A1
 Figure 2: White, Tower, on position C7
 */

let chess1 = {color: Black, value: King, position: ("A", 1)};
let chess2 = {color: White, value: Tower, position: ("C", 7)};