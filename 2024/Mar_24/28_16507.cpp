#include <iostream>

using namespace std;

int pSum[1010][1010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int r, c, k;
  cin >> r >> c >> k;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int n;
      cin >> n;

      pSum[i + 1][j + 1] = pSum[i + 1][j] + pSum[i][j + 1] - pSum[i][j] + n;
    }
  }

  for (int i = 0; i < k; i++) {
    int r1, c1, r2, c2;

    cin >> r1 >> c1 >> r2 >> c2;

    long long sum = pSum[r2][c2] - pSum[r1 - 1][c2] - pSum[r2][c1 - 1] +
                    pSum[r1 - 1][c1 - 1];

    int cnt = (r2 - r1 + 1) * (c2 - c1 + 1);

    cout << sum / cnt << "\n";
  }

  return 0;
}