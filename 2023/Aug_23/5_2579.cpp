#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int *dp = new int[n];
  int *stair = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> stair[i];
  }

  dp[0] = stair[0];
  dp[1] = stair[0] + stair[1];
  dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);

  for (int i = 2; i < n; i++) {
    dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i] + stair[i - 1]);
  }

  if (n == 1) {
    cout << dp[0] << '\n';
  }

  else if (n == 2) {
    cout << dp[1] << '\n';
  }

  else {
    cout << dp[n - 1] << '\n';
  }

  return 0;
}