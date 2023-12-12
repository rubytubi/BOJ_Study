#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  while (s.size() != t.size()) {
    if (t[t.size() - 1] == 'B') {
      t.pop_back();
      reverse(t.begin(), t.end());
    }

    else
      t.pop_back();
  }

  if (s == t)
    cout << "1\n";
  else
    cout << "0\n";

  return 0;
}