module List = {

  let rec map fn arr => {
    switch arr {
      | [] => []
      | [head, ...tail] => [fn head, ...map fn tail]
    }
  };

};

