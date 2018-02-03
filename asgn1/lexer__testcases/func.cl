(*

foo ()
{
    int i = 1;
}

int main(){
    foo();
    return 0;
}

*)


class Main {
	foo() : Int {
		{
			i : Int <- 1;
			return 0;
		}
	};

	main() : Int {
		{
			foo();
			return 0;
		}
	};
};