#include <algorithm>
#include <iostream>

using namespace std;

int arr[1010][1010];
int dp[1010][1010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  dp[0][0] = arr[0][0];

  for (int i = 1; i < n; i++) {
    dp[i][0] = dp[i - 1][0] + arr[i][0];
  }

  for (int j = 1; j < m; j++) {
    dp[0][j] = dp[0][j - 1] + arr[0][j];
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      dp[i][j] =
          max(dp[i][j - 1], max(dp[i - 1][j], dp[i - 1][j - 1])) + arr[i][j];
    }
  }

  cout << dp[n - 1][m - 1] << "\n";

  return 0;
}