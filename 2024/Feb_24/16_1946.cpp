#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);

    for (int j = 0; j < n; j++) {
      cin >> p[j].first >> p[j].second;
    }
    sort(p.begin(), p.end());

    int index = 0;
    int count = 1;
    for (int j = 1; j < n; j++) {
      if (p[index].second > p[j].second) {
        count++;
        index = j;
      }
    }
    cout << count << "\n";
  }

  return 0;
}