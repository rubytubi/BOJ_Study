#include <iostream>

using namespace std;

long long dp[31][31];

int main() {
  int n, k;
  cin >> n >> k;

  dp[1][1] = 1;
  dp[2][1] = 1;
  dp[2][2] = 1;

  for (int i = 3; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 1 || j == i)
        dp[i][j] = 1;
      else
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }

  cout << dp[n][k] << "\n";

  return 0;
}