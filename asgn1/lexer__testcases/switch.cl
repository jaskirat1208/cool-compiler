--int main(int na, char* argv[])
--{
--    int wflg = 0, tflg = 0;
--    int dflg = 0;
--    char c;
--    switch(c)
--    {
--        case 'w':
--        case 'W':
--            wflg = 1;
--            break;
--        case 't':
--        case 'T':
--           tflg = 1;
--            break;
--        case 'd':
--            dflg = 1;
--            break;
--    }
--    return 0;
--}


class Main {
  main() : Int {
    {
      wflg : Int <- 0;
      tflg : Int <- 0;
      dflg : Int <- 0;
      c : String;
      case c of
        "w" : String => {wflg <- 1; break;};
        "W" : String => {wflg <- 1; break;};
        "w" : String => {tflg <- 1; break;};
        "W" : String => {tflg <- 1; break;};
        "d" : String => {dflg <- 1; break;};
      esac;
      return 0;
    }
  };
};