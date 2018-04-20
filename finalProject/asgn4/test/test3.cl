-- loops
class Main {
	a : Int;
	b : Int;
	main (anu1 : Int) : Int {
		{
			a <- 4;
			b <- 50;
			while (a < b) loop (a <- a + 4) pool;
			-- do loop (a <- a + 4) pool while{ (a < b) && (a = b) };
			return {0};
		}
	};
};