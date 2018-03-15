import group19TestCases;

class Main {
	n : Int;
	arr : Int[10];
	init (nGiven : Int, arrElements : Int[]) : Cons {
		{
			n <- nGiven;
			arr <- arrElements;
			self;
		}
	};
};