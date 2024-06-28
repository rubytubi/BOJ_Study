#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int j, n;
    vector<int> v;

    cin >> j >> n;

    for (int i = 0; i < n; i++) {
      int r, c;
      cin >> r >> c;

      int tmp = r * c;

      v.push_back(tmp);
    }

    sort(v.rbegin(), v.rend());
    int cnt = 0;
    int k = 0;

    while (j > 0 && k < n) {
      j -= v[k];
      cnt++;
      k++;
    }
    cout << cnt << "\n";
  }

  return 0;
}