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
			arr[a] <- 50;
			-- arr[1] <- 4;
			-- b <- arr[0];
			-- c <- arr[1];
			return {0};
		}
	};
};