#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  int s, n;

  for (int i = 0; i < t; i++) {
    cin >> s >> n;

    int res = s;

    for (int i = 0; i < n; i++) {
      int q, p;
      cin >> q >> p;

      res += q * p;
    }
    cout << res << "\n";
  }

  return 0;
}