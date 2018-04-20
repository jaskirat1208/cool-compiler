-- functions and scoping
class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int <- 4;
	z : Int <- 10;

	foo (y : Int, z : Int, x : Int) : Int {
		{
			-- z <- z + 1;
			print(z);
			y <- 10 * y;
			return {y};
		}
	};
	bar (x : Int,y : Int) : Int {
		{
			x <- x + 6;
			x <- x + foo(x, x, x);
			return {x};
		}
	};

	main () : Int {
		{
			-- scan(a);
			scan(b);
			scan(c);
			-- foo(a, b, c);
			-- c <- bar(a, c);
			print(bar(a, c));
			-- bar()
			-- foo(x); -- uncommenting this line will throw error as x is not declared in this scope or neither in its parents'
			-- a <- bar(5,0);			
			-- c <- a * ~5;
			return {0};
		}
	};
};