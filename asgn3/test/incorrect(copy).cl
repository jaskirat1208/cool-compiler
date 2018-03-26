-- #include <stdio.h>
-- int main(){
--     int i=6;
--     for (;i<= 8 && i < 6.67 && i!= 7; i++){
-- 	int 0x123;
-- 	float 1e2,1e2e3,1.2.3;
--         if (i>=0);{
--             printf("yes\n");
--         }
--         else 
--             printf("no\n");
--     }
--     return 0;
-- }


class Main {
    main() : Int {
       {
            i : Int <- 6;
            for (0; i <= 8 && i < 6.67 && not (i = 7); i <- i+1) loop
            {
                0x123 : Int;
                1e2 : float;
                1e2e3 : float;
                1.2.3: float;
                if (i >= 0) then
                    out_string("yes\n")
                else
                    out_string("no\n")
                fi;
            }
            pool;
            return 0;
        }
    };
};