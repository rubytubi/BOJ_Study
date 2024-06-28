#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int dp[1010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> card(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> card[i];
  }

  for (int i = 1; i <= n; i++) {
    dp[i] = card[i]; // i장 한번에 사는 가격으로 초기화
    for (int j = 1; j <= i; j++) {
      dp[i] = min(dp[i - j] + dp[j],
                  dp[i]); // i장 한번에가 저렴 vs i - j장 + j장 이 저렴할까
    }
  }

  cout << dp[n] << "\n";

  return 0;
}