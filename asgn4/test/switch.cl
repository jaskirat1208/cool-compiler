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
    let wflg : Int <- 0, tflg : Int <- 0, dflg : Int <- 0, c : String in
    {
      {
        -- in our language case is used for type checking
        (*case c of
          "w" : String => {wflg <- 1; break;};
          "W" : String => {wflg <- 1; break;};
          "w" : String => {tflg <- 1; break;};
          "W" : String => {tflg <- 1; break;};
          "d" : String => {dflg <- 1; break;};
        esac;*)
        if c = "w" || c = "W" then wflg <- 1
          else
            if c = "t" || c = "T" then tflg <- 1
              else
                if c = "d" then dflg <- 1
                  else 0
                fi
            fi
        fi;
        return {0};
      }
    }
  };
};