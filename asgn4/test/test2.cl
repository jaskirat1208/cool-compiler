package group19TestCases;

import something.*;

class Main {
	func (a : Int) : Int {
		{
			if (a = 0) then
				return {1}
			else
				a <- a + 1
			fi;
			a;
		}
	};
};