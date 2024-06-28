#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<double> d(n, 0);
  vector<pair<double, int>> ans;

  for (int i = 0; i < n; i++) {
    int x, y, v;
    double distance = 0;

    cin >> x >> y >> v;

    distance = sqrt(pow(x, 2) + pow(y, 2)) / v;
    d[i] = distance;
    ans.push_back(make_pair(d[i], i));
  }

  sort(ans.begin(), ans.end());

  for (int i = 0; i < n; i++) {
    cout << ans[i].second + 1 << "\n";
  }

  return 0;
}