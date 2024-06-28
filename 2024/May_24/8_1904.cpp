#include <iostream>

using namespace std;

long long dp[1'000'001];

int main() {
  int n;
  cin >> n;

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 3;

  for (int i = 4; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
    dp[i] %= 15746;
  }

  cout << dp[n] << "\n";

  return 0;
}