class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	arr : Int[5];
	barr : Int[3] <- [3,4,5];
	main () : Int {
		{
			a <- 2;
			b <- 9;
			-- arr[2] <- 50;
			arr[1] <- 4;
			arr[1] <- a;
			arr[a] <- 4;
			arr[a] <- b;
			b <- arr[a];
			b <- arr[2];
			-- c <- arr[1];
			return {0};
		}
	};
};