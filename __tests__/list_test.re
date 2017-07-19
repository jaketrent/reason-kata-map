open Jest;

open Listy;

let () =
  describe "map"
    ExpectJs.(fun () => {
      test "map []" (fun () => {
        let noop = fun () => {};
        expect(Listy.map noop []) |> toEqual []
      });
      test "map square" (fun () => {
        let square = fun x => x * x;
        expect(Listy.map square [1, 2, 3]) |> toEqual [1, 4, 9]
      });
      test "map String.toUpperCase" (fun () =>
        expect(Listy.map Js.String.toUpperCase ["hello", "reason"]) |> toEqual ["HELLO", "REASON"]
      );
      test "map String.length" (fun () =>
        expect(Listy.map Js.String.length ["hello", "reason"]) |> toEqual [5, 6]
      );
    });
