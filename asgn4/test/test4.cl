-- a = foo();

-- int foo(){
--     return bar;
-- }

class Main {
	a : Int;
	b : Int;
	c : Int;
	bar : Int;

	foo () : Int {
		return {bar}
	};

	main () : Int {
		{
			foo();
			return {0};
		}
	};
};