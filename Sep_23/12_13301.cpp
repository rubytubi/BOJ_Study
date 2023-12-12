#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long long n;
  long long dp[100] = {
      0,
  };
  cin >> n;

  dp[1] = 4;
  dp[2] = 6;

  for (int i = 3; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  cout << dp[n] << "\n";

  return 0;
}