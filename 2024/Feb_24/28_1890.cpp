#include <iostream>

using namespace std;

int board[100][100];
long long dp[100][100];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> board[i][j];
    }
  }

  dp[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int jump = board[i][j];

      if (jump == 0)
        break;

      if (i + jump < n)
        dp[i + jump][j] += dp[i][j];

      if (j + jump < n)
        dp[i][j + jump] += dp[i][j];
    }
  }

  cout << dp[n - 1][n - 1] << "\n";

  return 0;
}