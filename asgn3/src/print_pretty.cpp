#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& s, char delimiter) {
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}
	return tokens;
}

int isTerminal(string str) {
	//In this part, we have chosen a convention that all terminals are in caps
	if (str[1] < 'Z'  &&  str[1] > 'A')
		return 1;
	return 0;
}

int getRightMostNonTerminalIndex(vector<string> v) {
	for (int i = v.size()-1; i >= 2; i--) {
		if (isTerminal(v[i])) {
			continue;
		} else {
			return i;
		}
	}
	return -1;
}

void print_pretty(vector<string> v) {

    cout<<"<!DOCTYPE html>\n<html>\n<head>\n\t<title>CODE AND GRAMMAR</title>\n</head>\n<body><ol>";
	string currString = v[0];
	cout <<"<li><b>"<< currString<<"</b>" << endl;
	vector<string> vecString = split(currString, ' ');
	int index, currIndex = 1;
	while ((index = getRightMostNonTerminalIndex(vecString)) != -1) {
		currString = "";
		for (int i = 0; i < vecString.size(); i++){
			if (i == index) {
				vector<string> vecProduction = split(v[currIndex], ' ');
				for (int j = 2; j < vecProduction.size(); j++) {
					if (vecProduction[j] != "EMPTY") {
						currString += vecProduction[j];
						currString += " ";
					}
				}
			} else {
				if (vecString[i] != "EMPTY") {
					currString += vecString[i];
					currString += " ";
				}
			}
		}
		vecString = split(currString, ' ');
        string to_print="";
        string string_before_last_non_terminal="",last_non_terminal="",residual="";
        int tmp_index = getRightMostNonTerminalIndex(vecString);
        for(int i=0;i<vecString.size();i++){
            if(i<tmp_index){
                string_before_last_non_terminal+=vecString[i]+" ";
            }
            else if(i>tmp_index){
                residual+=vecString[i]+" ";
            }
            if(tmp_index!=-1)                   //case when all are terminals :)
                last_non_terminal=vecString[tmp_index]+" ";
        }
        string_before_last_non_terminal = "<font size=\"3\" color=\"red\">"+string_before_last_non_terminal+"</font>";
        residual = "<font size=\"3\" color=\"yellow\">"+residual+"</font>";
        last_non_terminal = "<font size=\"3\" color=\"green\">"+ last_non_terminal +"</font>";
        cout<<"<li>"<<string_before_last_non_terminal<<" "<<last_non_terminal<<" "<<residual<<endl;
		// cout<<"RULE USED: "<<v[currIndex]<<"-------------------------------------------------------------"<<endl;

		currIndex++;
	}
    cout<<"</ol></body>\n</html>";
}
