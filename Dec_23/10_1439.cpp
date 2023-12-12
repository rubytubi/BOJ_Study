#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string s;
  cin >> s;

  int zero_cnt = 0, one_cnt = 0;

  for (int i = 1; i < s.length(); i++) {
    if (s[i] != s[i - 1]) {
      if (s[i - 1] == '0')
        zero_cnt++;
      else
        one_cnt++;
    }
  }

  if (s[s.length() - 1] == '0')
    zero_cnt++;
  else
    one_cnt++;

  int ret = min(one_cnt, zero_cnt);
  cout << ret << "\n";

  return 0;
}
