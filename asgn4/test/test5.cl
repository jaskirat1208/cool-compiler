-- arrays and let scopes
class Main {
	a : Int <- 2;
	b : Int;
	arr : Int[5] <- [7,2,4,5,8];
	barr : Int[3] ;
	main () : Int {
		{
			b <- 7;
			let c : Int in {
				{
					c <- a + b;
					c <- c + arr[a] * barr[0] - arr[2] / barr[2];
					b <- c;
				}
			};
			return {0};
		}
	};
};
