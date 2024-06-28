#include <iostream>
#include <vector>

using namespace std;

// 수열의 전체 길이 - 가장 긴 증가하는 부분 수열 길이 = 정답.

vector<int> v;
int dp[230];
int arr[230];
int ret;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    dp[i] = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
        dp[i] = dp[j] + 1;
    }
    if (ret < dp[i])
      ret = dp[i];
  }

  cout << n - ret << "\n";

  return 0;
}