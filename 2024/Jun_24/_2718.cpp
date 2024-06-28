#include <iostream>

using namespace std;

int dp[5000][4];

int main() {
  int t;
  cin >> t;

  dp[1] = 1;
  dp[2] = 5;
  dp[3] = 11;

  for (int i = 0; i < ; i++) {
    dp[i] = dp[i][0] +
  }

  while (t--) {
    int n;
    cin >> n;

    cout << dp[n] << '\n';
  }

  return 0;
}