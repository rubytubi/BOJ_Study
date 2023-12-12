#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[1010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> box(n);

  for (int i = 0; i < n; i++) {
    cin >> box[i];
    dp[i] = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (box[i] > box[j])
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }

  int ret = -1;

  for (int i = 0; i < n; i++) {
    ret = max(ret, dp[i]);
  }

  cout << ret << "\n";

  return 0;
}