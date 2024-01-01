#include <algorithm>
#include <iostream>

using namespace std;

int dp[1010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int a[1010] = {
      0,
  };

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  dp[0] = a[0];

  for (int i = 0; i < n; i++) {
    dp[i] = a[i];
    for (int j = 0; j < i; j++) {
      if (a[i] > a[j]) {
        dp[i] = max(dp[i], dp[j] + a[i]);
      }
    }
  }

  int ret = -1;
  for (int i = 0; i < n; i++) {
    ret = max(ret, dp[i]);
  }

  cout << ret << "\n";

  return 0;
}