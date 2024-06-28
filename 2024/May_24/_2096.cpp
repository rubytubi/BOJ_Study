#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[100'010][5];
int min_dp[100'010];
int max_dp[100'010];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= 3; j++) {
      cin >> arr[i][j];
    }
  }

  int min_index = 0;
  int max_index = 0;

  min_dp[0] = min(arr[0][1], min(arr[0][2], arr[0][3]));
  for (int i = 0; i < 3; i++) {
    if (arr[0][i] == min_dp[0])
      min_index = i;
  }

  max_dp[0] = max(arr[0][0], max(arr[0][1], arr[0][2]));
  for (int i = 0; i < 3; i++) {
    if (arr[0][i] == min_dp[0])
      max_index = i;
  }

  // 최소 점수
  for (int i = 1; i < n; i++) {
  }

  return 0;
}