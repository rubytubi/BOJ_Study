#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long> v;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  unsigned long long count = 0;
  vector<unsigned long long> sum(n + 1);

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    v.push_back(t);
    sum[i] = sum[i - 1] + v[i];

    if (sum[i] % m == 0)
      count++;
  }

  int start = 0, end = n - 1;

  while (end > 0) {
    if (end == start) {
      end--;

      start = 0;
    }

    if ((sum[end] - sum[start]) % m == 0) {
      count++;
      start++;
    }

    else
      start++;
  }

  cout << count << "\n";

  return 0;
}