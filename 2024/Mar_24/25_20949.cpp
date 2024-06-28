#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(const pair<int, double> &a, const pair<int, double> &b) {
  if (a.second == b.second)
    return a.first < b.first;
  else
    return a.second > b.second;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<pair<int, double>> v;

  int w[1010], h[1010];
  double ppi;

  for (int i = 0; i < n; i++) {
    cin >> w[i] >> h[i];
    ppi = sqrt(pow(w[i], 2) + pow(h[i], 2)) / 77;
    v.push_back(make_pair(i, ppi));
  }

  sort(v.begin(), v.end(), cmp);

  for (const auto &i : v) {
    cout << i.first + 1 << "\n";
  }

  return 0;
}
