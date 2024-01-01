#include <algorithm>
#include <iostream>

using namespace std;

int arr[501][501];
int dp[501];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cin >> arr[i][j];
    }
  }

  dp[1] = arr[1][1];
  dp[2] =

      for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
    }
  }

  return 0;
}