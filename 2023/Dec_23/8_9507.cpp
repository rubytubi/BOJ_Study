#include <iostream>

using namespace std;

/*
long long koong(int n) {
  if (n < 2)
    return 1;
  else if (n == 2)
    return 2;
  else if (n == 3)
    return 4;
  else
    return (koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4));
}
*/

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  int n;
  long long dp[70] = {
      0,
  };
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  dp[4] = 8;

  for (int i = 5; i <= 67; i++) {
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
  }

  while (t--) {
    cin >> n;
    cout << dp[n] << "\n";
  }

  return 0;
}