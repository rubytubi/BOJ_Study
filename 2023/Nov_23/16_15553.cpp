#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k;
  cin >> n >> k;
  long long total = 0;

  vector<long long> time(n);
  vector<long long> d(n);

  cin >> time[0];
  d[0] = 0;
  for (int i = 1; i < n; i++) {
    cin >> time[i];
    d[i] = time[i] - (time[i - 1] + 1);
  }

  sort(d.rbegin(), d.rend());

  for (int i = 0; i < k - 1; i++) {
    total += d[i];
  }

  cout << (time[n - 1] + 1 - time[0]) - total << "\n";

  return 0;
}