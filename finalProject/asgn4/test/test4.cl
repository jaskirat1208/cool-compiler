-- functions and scoping
class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int <- 4;

	foo (y : Int) : Int {
		{
			y <- 6;
			return {y};
		}
	};
	bar (x : Int) : Int {
		{
			x <- x + 6;
			x <- x + foo(x);
			return {x};
		}
	};

	main () : Int {
		{
			a <- 5;
			foo(a);
			-- foo(x); -- uncommenting this line will throw error as x is not declared in this scope or neither in its parents'
			a <- bar(5);			
			-- c <- a * ~5;
			return {0};
		}
	};
};