#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;

  vector<string> str;
  for (int i = 0; i < s.size(); i++) {
    str.push_back(s.substr(i));
  }

  sort(str.begin(), str.end());

  for (int i = 0; i < str.size(); i++) {
    cout << str[i] << "\n";
  }

  return 0;
}