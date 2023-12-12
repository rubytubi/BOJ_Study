#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool multiple_of_3(string s) {
  int sum = 0;
  for (int i = 0; i < s.size(); i++) {
    sum += s[i] - '0';
  }

  if (sum % 3 != 0)
    return false;

  return true;
}

bool presence_of_0(string s) {
  int zero = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      zero = 1;
    }
  }
  if (zero == 1)
    return true;
  else
    return false;
}

int main() {
  string n;
  cin >> n;

  vector<string> num(n.size());

  if (multiple_of_3(n) == false || presence_of_0(n) == false) {
    cout << "-1\n";
    return 0;
  }

  else {
    for (int i = 0; i < n.size(); i++) {
      num[i] = n[i];
    }
    sort(num.begin(), num.end());
    reverse(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++) {
      cout << num[i];
    }
    cout << '\n';
  }

  return 0;
}
