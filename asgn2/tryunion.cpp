#include <bits/stdc++.h>

using namespace std;

int n1[] = {1,2};
int n2[] = {3,4};

class HashMap {
	private :
		map<string, int*>table;
	public :
		HashMap() {
			insert("a", n1);
			insert("b", n2);
		}
		void insert(string a, int* b) {
			table.insert(make_pair(a, b));
		}
		int* lookup(string a) {
			map<string, int*>::iterator i = table.find(a);
			if (i != table.end()) {
				return i->second;
			}
			return NULL;
		}
		bool modify(string a, int* b) {
			// map<string, int*>::iterator i = table.find(a);
			// if (i != table.end()) {
			// 	i->second = b;
			// 	return true;
			// }
			// return false;
			table[a] = b;
		}
};

int main() {
	HashMap mapping;
	int n[] = {5,6};
	cout << mapping.lookup("a")[0] << endl;
	mapping.modify("a", n);
	mapping.modify("f", n);
	// mapping.lookup("a") = n;
	// mapping.insert("b", [8]);
	// mapping.insert("c", "h");
	cout << mapping.lookup("fb") << endl;
	return 0;
}