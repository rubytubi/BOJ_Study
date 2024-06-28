#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    // 꼭짓점 - 모서리 + 면 = 2
    int p, c, ans = 0;
    cin >> p >> c;

    ans = 2 - p + c;

    cout << ans << "\n";
  }

  return 0;
}
