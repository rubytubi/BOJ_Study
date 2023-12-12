#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, maxWeight = 0;
  cin >> n;

  vector<int> rope(n);

  for (int i = 0; i < n; i++) {
    cin >> rope[i];
  }

  sort(rope.begin(), rope.end());

  for (int i = 0; i < n; i++) {
    maxWeight = max(maxWeight, rope[i] * (n - i));
  }

  cout << maxWeight << '\n';

  return 0;
}