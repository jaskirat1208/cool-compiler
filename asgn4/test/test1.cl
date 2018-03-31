class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	e : String;
	main () : Int {
		{
			-- c <- a * ~5;
			-- d <- c + a;
			-- b <- ~c;
			-- e <- "anu";
			-- if (a < b;
			a <- 1;
			b <- 2;
			if (a < b) && (a = b) then (c <- a + b) else (c <- a - b) fi;
			d <- 1;
		}
	};
};