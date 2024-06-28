#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int board[1050][1050];
int sum[1050][1050];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> board[i][j];
      sum[i][j] = sum[i][j - 1] + board[i][j];
    }
  }

  while (m--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long ret = 0;

    for (int i = x1; i <= x2; i++) {
      ret += sum[i][y2] - sum[i][y1 - 1];
    }

    cout << ret << "\n";
  }

  return 0;
}