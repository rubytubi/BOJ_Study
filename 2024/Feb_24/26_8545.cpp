#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());

  cout << s << "\n";

  return 0;
}
