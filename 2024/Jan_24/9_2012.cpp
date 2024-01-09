#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> rank(n);

  for (int i = 0; i < n; i++) {
    cin >> rank[i];
  }

  sort(rank.begin(), rank.end());

  long long count = 0;

  for (int i = 0; i < n; i++) {
    count += abs(rank[i] - (i + 1));
  }

  cout << count << "\n";

  return 0;
}