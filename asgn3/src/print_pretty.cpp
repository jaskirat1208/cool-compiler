#include <bits/stdc++.h>

#define PATH_TO_FILE "parser.html"
#define COLOR_1 "red"
#define COLOR_2 "green"
#define COLOR_3 "yellow"

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

void print_code(std::vector<string> v){

}
void print_pretty(vector<string> v) {
	ofstream html_file;
    string tmp = R"(<div class="box">
	<h2 align="center"> Printing the parse tree </h2>
	<p>At vero eos et accusamus et iusto odio dignissimos ducimus:</p>
	<ol>)";
	
	html_file.open(PATH_TO_FILE);
    string currString = v[0];
    html_file<<R"(<!DOCTYPE html>
<html>
<head>
	<title></title>
	<style>
		div.box {
				margin: 1.6em 0 1em 0;
		    padding: 0 0 0 1em;
				border: 2px solid #7db447;
			}
			ol {
				margin: 1em;
				padding: 0.1em 0 0.8em 1.2em;
			}
			.no-bg, .bg {
				font-family: "DejaVu Sans", sans-serif;
				font-weight: bold;z
				padding: 0.1em 0 0.8em 1em;
			}
			.bg {
				background-color: #e3f3d4;
			}
			.no-bg p, .bg p {
				font-family: "DejaVu Serif", serif;
			}

	</style>
</head>
<body>
)";
    html_file<<tmp;
	// html_file <<"<li class = \"bg\"><b>"<< currString<<"</b></li>" << endl;
	vector<string> vecString = split(currString, ' ');
	string string_before_last_non_terminal="",last_non_terminal="",residual="";
	for (int i = 0; i < vecString.size()-1; ++i)
	{
		string_before_last_non_terminal+=vecString[i] + " ";
	}
	html_file<<"<li class = \"bg\"><font size=\"3\" color=\"red\"> "<<string_before_last_non_terminal<<"  </font>  <font size=\"3\" color=\"green\"> "<<vecString[vecString.size()-1]<<"</font></li>\n";
	int index, currIndex = 1;
	int id=0;								//only for formatting sake
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
        string_before_last_non_terminal="",last_non_terminal="",residual="";
        int tmp_index = getRightMostNonTerminalIndex(vecString);
        for(int i=2;i<vecString.size();i++){
            if(i<tmp_index){
                string_before_last_non_terminal+=vecString[i]+" ";
            }
            else if(i>tmp_index){
                residual+=vecString[i]+" ";
            }
            if(tmp_index!=-1)
                last_non_terminal=vecString[tmp_index]+" ";
        }
        string_before_last_non_terminal = "<font size=\"3\" color=\"red\"> "+vecString[0]+" "+vecString[1]+" "+string_before_last_non_terminal+"</font>";
        residual = "<font size=\"3\" color=\"yellow\">"+residual+"</font>";
        last_non_terminal = "<font size=\"3\" color=\"green\">"+ last_non_terminal +"</font>";
        if (id%2==1)
        {
       		html_file<<"<li class = \"bg\">"<<string_before_last_non_terminal<<" "<<last_non_terminal<<" "<<residual<<"</li>\n";
        }
        else{
        	html_file<<"<li class = \"no-bg\">"<<string_before_last_non_terminal<<" "<<last_non_terminal<<" "<<residual<<"</li>\n";
        }
        // cout<<"RULE USED: "<<v[currIndex]<<"-------------------------------------------------------------"<<endl;
        id++;
		currIndex++;
	}
    html_file<<"</ol></div>";
   

}
