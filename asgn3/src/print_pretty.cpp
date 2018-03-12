#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

string to_be_printed;

std::vector<std::string> split(const std::string& s, char delimiter) {
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(s);
	while (std::getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}


int check_for_terminal(string str) {
	//In this part, we have chosen a convention that all terminals are in caps
	if (str[1] < 'Z'  &&  str[1] > 'A')
		return 1;
	return 0;
}

int get_rightmost_non_terminal_index(vector<string> v) {
	for (int i = v.size()-1; i >= 2; i--) {
		if (check_for_terminal(v[i])) {
			continue;
		} else {
			// cout << "Checking for terminal: " << v[i] << endl;			
			return i;
		}
	}
	return -1;
}

// void print_pretty(vector<string> v){
//     cout<<"digraph G{"<<endl;
//     for(int i=0;i<v.size();i++){
//         vector<string> strs;
//         strs = split(v[i],' ');

//         for(int i=2;i<strs.size();i++){
//             cout<<strs[0]<<" -> "<<strs[i]<<endl;
//         }
//     }
//     cout<<"}"<<endl;
// }


void print_pretty(vector<string> v) {
	to_be_printed = v[0];
	cout << to_be_printed << endl;
	vector<string> vecString = split(to_be_printed, ' ');
	int index, currIndex = 1;
	while ((index = get_rightmost_non_terminal_index(vecString)) != -1) {
		to_be_printed = "";
		for (int i = 0; i < vecString.size(); i++){
			if (i == index) {
				vector<string> vecProduction = split(v[currIndex], ' ');
				for (int j = 2; j < vecProduction.size(); j++) {
					if (vecProduction[j] != "EMPTY") {
						to_be_printed += vecProduction[j];
						to_be_printed += " ";
					}
				}
			} else {
				if (vecString[i] != "EMPTY") {
					to_be_printed += vecString[i];
					to_be_printed += " ";
				}
			}
		}
		vecString = split(to_be_printed, ' ');
		cout<<"RULE USED: "<<v[currIndex]<<"-------------------------------------------------------------"<<endl;
		cout << to_be_printed << endl;
		currIndex++;
	}
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	string final = "";
	// 	cout<<i<<": ";
	// 	vector<string> str = split(v[i],' ');
	// 	int index = get_rightmost_non_terminal_index(str);
	// 	// for (int i = 0; i < str.size(); ++i)
	// 	// {
	// 	// 	final+=str[i];
	// 	// }
	// 	// cout<<final<<endl;


	// 	// update_rightmost_derivation(v[i],to);
		
	// }


}