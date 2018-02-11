#include <unordered_map>
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  unordered_map<string, string> m;
  m["hello"] = "anupriy";
  // check if key is present
  // cout << m.find("world") << " " << m.end() << endl;
  cout << m.begin()->first << endl;
  if (m.find("world") != m.end())
    cout << "unordered_map contains key world!\n";
  // retrieve
  string a = "hello";
  cout << m[a] << '\n';
  m.find("hello");
  unordered_map<string, string>::iterator i = m.find("hello");
  assert(i != m.end());
  cout << "Key: " << i->first << " Value: " << i->second << endl;

  return 0;
}