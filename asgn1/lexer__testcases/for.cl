-- #include <stdio.h>
-- int main(){
--     int i=6;
--     for (;i<= 8 && i>= 6 && i!= 7; i++){
--         if (i>=0){
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
            for (0; i <= 8 && i >= 6 && not (i = 7); i <- i+1) loop
            {
                if (i>=0) then
                    out_string("yes\n")
                else
                    out_string("no\n")
                fi;
            }
            pool;
		}
	};
};