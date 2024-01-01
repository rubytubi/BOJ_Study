#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> seq(n);
  int dp[1010] = {
      0,
  };

  for (int i = 0; i < n; i++) {
    cin >> seq[i];
    dp[i] = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (seq[i] > seq[j]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  int ret = 0;
  for (int i = 0; i < n; i++) {
    ret = max(ret, dp[i]);
  }

  cout << ret << "\n";

  return 0;
}