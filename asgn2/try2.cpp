#include <bits/stdc++.h>

using namespace std;

union S {
	int a;
	string s;
};

int main() {
	int a = 1;
	S s = {5};
	// s.a = 5;
	cout << typeid(s.a).name() << endl;
	return 0;
}