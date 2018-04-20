-- arrays and let scopes
class Main {
	a : Int <- 2;
	b : Int <- 9;
	arr : Int[5] <- [7,2,4,5,8];
	-- barr : Int[3] ;
	main () : Int {
		{
			-- b <- 7;
			let c : Int in {
				{
					-- c <- a + b; 
					-- print(c);
					c <- arr[0] * 4;
					-- c <- c * 4;
					print(c);
					-- b <- c*4;
					-- print(b);
     --                arr[1] <- b; 
     --                print(a);
     --                print(arr[0]);
                    -- print(arr[1]);
                    -- print(b);
                    -- print(c);
                    -- print(arr[1]);
				}
			};
			return {0};
		}
	};
};
