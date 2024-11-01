#include <iostream>
#include <string>

using namespace std;

int t, ans;
string s;

int main() {
  cin >> t;

  while (t--) {
    ans = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'D')
        break;
      ans++;
    }
    cout << ans << '\n';
  }

  return 0;
}
