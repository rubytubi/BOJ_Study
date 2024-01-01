#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  vector<int> kid(n);
  vector<int> d(n);

  for (int i = 0; i < n; i++) {
    cin >> kid[i];
    d[i] = 0;
  }

  sort(kid.begin(), kid.end());

  for (int i = 0; i < n - 1; i++) {
    d[i] = kid[i + 1] - kid[i];
  }

  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());

  int sum = 0;

  for (int i = 0; i < k - 1; i++) {
    d[i] = 0;
  }

  for (int i = 0; i < n - 1; i++) {
    if (d[i] == 0)
      continue;
    sum += d[i];
  }

  cout << sum << "\n";

  return 0;
}