#include <algorithm>
#include <iostream>

using namespace std;

int dp[15];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 1;

  for (int i = 3; i <= n; i++) {
    int t = i / 2;
    dp[i] = (t * (i - t)) + dp[t] + dp[i - t];
  }

  cout << dp[n] << "\n";

  return 0;
}