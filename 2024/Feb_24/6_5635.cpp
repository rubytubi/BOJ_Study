#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<pair<pair<int, int>, pair<int, string>>> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i].second.second >> p[i].second.first >> p[i].first.second >>
        p[i].first.first;
  }

  sort(p.begin(), p.end());

  cout << p[n - 1].second.second << "\n" << p[0].second.second << "\n";

  return 0;
}