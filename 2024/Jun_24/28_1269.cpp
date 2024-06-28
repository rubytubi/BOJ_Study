#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

set<int> a;
set<int> b;
int cnt;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;

    a.insert(val);
  }

  for (int i = 0; i < m; i++) {
    int val;
    cin >> val;

    b.insert(val);
  }

  for (auto &iter : a) {
    if (b.find(iter) == b.end())
      cnt++;
  }

  for (auto &iter : b) {
    if (a.find(iter) == a.end())
      cnt++;
  }

  cout << cnt << "\n";

  return 0;
}