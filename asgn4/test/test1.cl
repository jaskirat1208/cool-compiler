-- a = b + c - d / e *b%10

class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	e : Int;
	main () : Int {
		{
			a <- b + c - d / e * b;
			return {0};
		}
	};
};
