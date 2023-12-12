#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    vector<int> log(n);

    for (int i = 0; i < n; i++) {
      cin >> log[i];
    }

    sort(log.begin(), log.end());

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0)
        v[i / 2] = log[i];

      else
        v[n - 1 - i / 2] = log[i];
    }

    int max_d = 0;

    for (int i = 0; i < n; i++) {
      int d = abs(v[i] - v[(i + 1) % n]);
      max_d = max(max_d, d);
    }

    cout << max_d << "\n";
  }

  return 0;
}