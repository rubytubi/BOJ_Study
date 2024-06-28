#include <iostream>

using namespace std;

long long dp[1010][1010];

int main() {
  int n, k;
  cin >> n >> k;

  dp[0][0] = 1;
  dp[1][0] = 1;
  dp[1][1] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= i; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = 1;
      }

      dp[i][j] = (dp[i - 1][j - 1] % 10007 + dp[i - 1][j] % 10007) % 10007;
    }
  }

  cout << dp[n][k] << "\n";

  return 0;
}