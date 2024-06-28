#include <algorithm>
#include <iostream>

using namespace std;

int prefix_sum[301][301]; // 누적합 저장할 배열
int arr[301][301];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int p = 1; p <= n; p++) {
    for (int q = 1; q <= m; q++) {
      cin >> arr[p][q];
      prefix_sum[p][q] = prefix_sum[p][q - 1] + arr[p][q];
    }
  }

  int k;
  cin >> k;

  for (int r = 0; r < k; r++) {
    int i, j, x, y;
    cin >> i >> j >> x >> y;

    int sum = 0;

    for (int s = x; s >= i; s--)
      sum += prefix_sum[s][y];

    for (int s = i; s <= x; s++)
      sum -= prefix_sum[s][j - 1];

    cout << sum << "\n";
  }

  return 0;
}