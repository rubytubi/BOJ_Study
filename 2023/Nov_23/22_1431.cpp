#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string str[55];

bool compare(string a, string b) {
  if (a.size() != b.size()) // 길이
    return a.size() < b.size();

  int x = 0, y = 0;
  for (int i = 0; i < a.size(); i++) { // 숫자
    if (a[i] - '0' < 10)
      x += a[i] - '0';

    if (b[i] - '0' < 10)
      y += b[i] - '0';
  }

  if (x != y)
    return x < y;

  return a < b;
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
    cout << str[i] << "\n";
  }

  return 0;
}