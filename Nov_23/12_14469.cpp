#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int a, b, count = 0;

  vector<pair<int, int>> t;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    t.push_back({a, b});
  }

  sort(t.begin(), t.end());

  count = t[0].first + t[0].second;

  for (int i = 1; i < n; i++) {
    if (count <= t[i].first) {
      count = t[i].first;
      count += t[i].second;
    }

    else {
      count += t[i].second;
    }
  }

  cout << count << "\n";

  return 0;
}