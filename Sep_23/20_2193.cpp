#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long dp[100] = {0};
  dp[1] = 1;
  dp[2] = 1;
  for (int i = 3; i <= 90; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  cout << dp[n] << "\n";

  return 0;
}