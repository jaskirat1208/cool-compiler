-- for(i =0; i++ < 100;){
--       a++;
-- }

class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	e : Int;
	i : Int;
	main () : Int {
		{
			i <- 0;
			while (i < 100) loop {
				a <- a + 1;
				i <- i + 1;
			} pool;
			return {0};
		}
	};
};