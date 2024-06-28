#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second == b.second)
    return a.first < b.first;

  else
    return a.second < b.second;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<pair<int, int>> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
  }

  sort(p.begin(), p.end(), compare);

  int end = p[0].second, count = 1;

  for (int i = 1; i < n; i++) {
    if (end > p[i].first)
      continue;

    else {
      end = p[i].second;
      count++;
    }
  }

  cout << count << "\n";

  return 0;
}