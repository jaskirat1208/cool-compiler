-- if (c) {
-- 	if (d)
--     	d++
--     else
--         d--
-- }

class Main {
	a : Int <- 1;
	b : Int <- 2;
	c : Int <- 3;
	d : Int <- 4;
	main () : Int {
		{
			if (not (c = 0)) then
				if (not (d = 0)) then
					d <- d + 1
				else
					d <- d - 1
				fi
			else
				return {0}
			fi;
			print(a);
			return {0};
		}
	};
};