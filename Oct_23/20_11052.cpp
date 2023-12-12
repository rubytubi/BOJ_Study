#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;

  int card[1010] = {0};
  int dp[1010] = {0};

  for (int i = 1; i <= n; i++) {
    cin >> card[i];
  }

  dp[1] = card[1];

  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      dp[i] = max(dp[i], (dp[i - j] + card[j]));
    }
  }

  cout << dp[n] << "\n";

  return 0;
}
