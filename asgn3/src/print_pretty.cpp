#include <bits/stdc++.h>

#define PATH_TO_FILE "parser.html"

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
string get_filename(string str){
    string tmp = split(str, '.')[0]+".html";
    tmp = split(tmp, '/')[1];
    cout << tmp << endl;
    return tmp;
}
int isTerminal(string str) {
	//In this part, we have chosen a convention that all terminals are in caps
	if (str[1] <= 'Z'  &&  str[1] >= 'A')
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

void print_pretty(vector<string> v, string of) {
	ofstream htmlFile;
    string tmp = R"(<div class="box">
	<h2 align="center"> Printing the parse tree </h2>
	<ol>)";
	
	htmlFile.open(of);
    string currString = v[0];
    htmlFile << R"(<!DOCTYPE html>
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
    htmlFile << tmp;
	vector<string> vecString = split(currString, ' ');
	string stringBeforeLastNonTerminal = "", lastNonTerminal = "", residual = "";
	for (int i = 2; i < vecString.size()-1; ++i) {
		stringBeforeLastNonTerminal += vecString[i] + " ";
	}
	htmlFile << "<li class = \"bg\"><font size = \"3\"> " << vecString[0] << " " << vecString[1] << "</font> " << "<font size = \"3\" color = \"#aa2020\"> " << stringBeforeLastNonTerminal << "  </font>  <font size = \"4\" color = \"#20aa47\"> " << vecString[vecString.size()-1] << "</font></li>\n";
	int index, currIndex = 1;
	int id = 0;    // only for formatting sake
	while ((index = getRightMostNonTerminalIndex(vecString)) != -1) {
		currString = "";
		for (int i = 0; i < vecString.size(); i++) {
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
        stringBeforeLastNonTerminal = "", lastNonTerminal = "", residual = "";
        int tmp_index = getRightMostNonTerminalIndex(vecString);
        for (int i = 2; i < vecString.size(); i++) {
            if (i < tmp_index) {
                stringBeforeLastNonTerminal += vecString[i] + " ";
            } else if (i > tmp_index) {
                residual += vecString[i] + " ";
            }
            if (tmp_index != -1) {
                lastNonTerminal = vecString[tmp_index] + " ";
            }
        }
        stringBeforeLastNonTerminal = "<font size = \"3\"> " + vecString[0] + " " + vecString[1] + "</font>" + " " + "<font size = \"3\" color = \"#aa2020\"> " + stringBeforeLastNonTerminal + "</font>";
        residual = "<font size = \"3\" color = \"#4286f4\">" + residual + "</font>";
        lastNonTerminal = "<font size = \"4\" color = \"#20aa47\">" + lastNonTerminal + "</font>";
        if (id % 2 == 1) {
       		htmlFile << "<li class = \"bg\">" << stringBeforeLastNonTerminal << " " << lastNonTerminal << " " << residual << "</li>\n";
        } else {
        	htmlFile << "<li class = \"no-bg\">" << stringBeforeLastNonTerminal << " " << lastNonTerminal << " " << residual << "</li>\n";
        }
        id++;
		currIndex++;
	}
    htmlFile << "</ol></div>";
}
