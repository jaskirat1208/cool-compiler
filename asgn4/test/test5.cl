-- if (c && d)
--     d++
-- else if (d & e) // bitwise and
--     e++
-- else
--     d--

class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	e : Int;

	main () : Int {
		{
			if ((not (c = 0)) && (not (d = 0))) then
				d <- d + 1
			else
				if ((not (d = 0)) && (not (e = 0))) then
					e <- e + 1
				else
					d <- d - 1
				fi
			fi;
			return {0};
		}
	};
};