#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;


std::vector<std::string> split(const std::string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token;
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}


void print_pretty(vector<string> v){
    cout<<"digraph G{"<<endl;
    for(int i=0;i<v.size();i++){
        vector<string> strs;
        strs = split(v[i],' ');

        for(int i=2;i<strs.size();i++){
            cout<<strs[0]<<" -> "<<strs[i]<<endl;
        }
    }
    cout<<"}"<<endl;
}

