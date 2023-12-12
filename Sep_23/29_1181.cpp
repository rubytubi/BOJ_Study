#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string str[20010];

bool compare(string a, string b) {
  if (a.length() == b.length())
    return a < b;

  else
    return a.length() < b.length();
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }

  sort(str, str + n, compare);

  for (int i = 0; i < n; i++) {
    if (str[i] == str[i - 1])
      continue;
    cout << str[i] << "\n";
  }

  return 0;
}