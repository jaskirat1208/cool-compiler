import group19TestCases;

class Main {
	n : Int;
	arr : Int[];
	init(nGiven : Int, arrElements : Int[]) : Cons {
		{
			n <- nGiven;
			arr <- arrElements;
			self;
		}
	}
};