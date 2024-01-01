#include <algorithm>
#include <iostream>

using namespace std;
// 1, 2, 5, 7

int main() {
  int n;
  cin >> n;
  int *dp = new int[n + 1];

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  dp[3] = 2;
  dp[4] = 2;
  dp[5] = 1;
  dp[6] = 2;
  dp[7] = 1;

  for (int i = 8; i <= n; i++) {
    dp[i] = min({dp[i - 7] + 1, dp[i - 5] + 1, dp[i - 2] + 1, dp[i - 1] + 1});
  }

  cout << dp[n] << "\n";

  return 0;
}