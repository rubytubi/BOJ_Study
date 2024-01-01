#include <iostream>

using namespace std;

long dp[1000100];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n;
  cin >> t;

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;

  for (int i = 4; i <= 1000000; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
  }

  for (int i = 0; i < t; i++) {
    cin >> n;
    cout << dp[n] << "\n";
  }

  return 0;
}
