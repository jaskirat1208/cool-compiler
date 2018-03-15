class Main {
	a : Int <- 5;
	a : Razz <- case self of
		n : Razz => (new Bar);
		n : Foo => (new Razz);
		n : Bar => n;
		esac;
};
