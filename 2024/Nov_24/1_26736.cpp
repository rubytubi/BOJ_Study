#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int ans = 0, n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;

    if (s.find("01") < s.size() || s.find("OI") < s.size()) {
      ans++;
    }
  }

  cout << ans << "\n";

  return 0;
}
