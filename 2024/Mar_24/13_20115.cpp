#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<double> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  double ans = v[n - 1]; // 10

  for (int i = 0; i < n - 1; i++) {
    if (v[i] > ans)
      ans = (ans / 2) + v[i];

    else
      ans += v[i] / 2; // ans = ans + v[i] / 2
  }

  cout << fixed << setprecision(5) << ans << "\n";

  return 0;
}