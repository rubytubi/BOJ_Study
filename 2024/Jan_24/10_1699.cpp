#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int dp[100010];

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 3;
  dp[4] = 1;

  for (int i = 5; i <= n; i++) {
    dp[i] = 100;
    for (int j = 1; j * j <= i; j++) {
      if (dp[i] > dp[i - j * j] + 1)
        dp[i] = dp[i - j * j] + 1;
    }
  }

  cout << dp[n] << "\n";

  return 0;
}