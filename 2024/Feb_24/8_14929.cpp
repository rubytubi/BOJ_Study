#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> v(n);
  vector<long long> pre_sum(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (i == 0)
      pre_sum[i] = v[i];

    else
      pre_sum[i] = pre_sum[i - 1] + v[i];
  }

  long long sum = 0;

  if (n == 1)
    sum = 0;

  else if (n == 2)
    sum = v[0] * v[1];

  else {
    for (int i = 0; i < n - 1; i++) {
      sum += v[i] * (pre_sum[n - 1] - pre_sum[i]);
    }
  }

  cout << sum << "\n";

  return 0;
}
