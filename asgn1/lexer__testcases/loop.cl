-- #include <stdio.h>

-- int main(){
	
-- 	int i,j,k,res;
-- 	for(res = 0, i=0; i < 10; i++){
-- 		for(j = 0; j < 10; j++){
-- 			for(k = 0; k < 10; k++){
-- 				res += 1;
-- 			}
-- 		}
-- 	}

-- 	printf("res = %d\n", res);
-- }



class Main {
    main() : Int {
       {
            i : Int;
            j : Int;
            k : Int;
            res : Int;
            for ({res <- 0; i <- 0;}; i < 10; i <- i+1) loop
            {
                for (j <- 0; j < 10; j <- j+1) loop
	            {
	                for (k <- 0; k < 10; k <- k+1) loop
		               res <- res + 1
		            pool;
	            }
	            pool;
            }
            pool;
            out_string("res = ");
            out_int(res);
            out_string("\n");
            return 0;
        }
    };
};