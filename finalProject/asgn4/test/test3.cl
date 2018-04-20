-- loops
class Main {
	a : Int;
	b : Int;
	main () : Int {
		{
			a <- 7;
			b <- 100;
			while (a < b) loop {
				a <- a + 4;
				print(a);
			} pool;
			-- do loop {
			-- 	print(a);
			-- 	a <- a + 4;
			-- } pool while{ (a < b) || (a = b) };
			print(a);
			return {0};
		}
	};
};