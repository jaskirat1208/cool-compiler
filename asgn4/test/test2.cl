-- if else
class Main {
	a : Int;
	b : Int <- 0;
	main () : Int {
		{
			a <- 5;
			-- if ((a = 0 && b >= 0) || (not(a = 0)) && b < 0) then
			if (a < 0) then
				a <- a - 1
			else
				a <- a + 1
			fi;
			return {0};
		}
	};
};