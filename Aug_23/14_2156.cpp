#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int *wine = new int[n + 1];
  int *dp = new int[n + 1];

  for (int i = 1; i <= n; i++) {
    cin >> wine[i];
  }

  dp[1] = wine[1];
  dp[2] = wine[1] + wine[2];
  dp[3] = max({dp[2], wine[2] + wine[3], wine[1] + wine[3]});

  for (int i = 4; i <= n; i++) {
    dp[i] = max(
        {dp[i - 1], dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]});
  }

  cout << dp[n] << '\n';

  delete[] wine;
  delete[] dp;

  return 0;
}
