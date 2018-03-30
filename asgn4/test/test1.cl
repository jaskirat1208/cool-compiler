class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	main () : Int {
		{
			c <- a * ~5;
			d <- c + a;
			b <- ~c;
		}
	};
};