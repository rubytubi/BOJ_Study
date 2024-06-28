#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, q;
  cin >> n >> q;

  vector<int> a(n + 1);
  vector<int> sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  for (int i = 1; i <= n; i++) {
    sum[i] = sum[i - 1] + a[i];
  }

  for (int i = 0; i < q; i++) {
    int l = 0, r = 0;
    cin >> l >> r;

    cout << sum[r] - sum[l - 1] << "\n";
  }

  return 0;
}