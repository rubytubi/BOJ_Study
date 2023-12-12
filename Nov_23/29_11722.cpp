#include <iostream>
#include <vector>

using namespace std;
int dp[1010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> seq(n);

  for (int i = 0; i < n; i++) {
    cin >> seq[i];
  }

  for (int i = 0; i < n; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (seq[i] < seq[j])
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    count = max(count, dp[i]);
  }

  cout << count << "\n";

  return 0;
}