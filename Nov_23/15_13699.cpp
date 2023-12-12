#include <iostream>

using namespace std;

long long dp[40];

int main() {
  int n;
  cin >> n;

  dp[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= i; k++) {
      dp[i] += dp[k - 1] * dp[i - k];
    }
  }

  cout << dp[n] << "\n";

  return 0;
}
