#include <algorithm>
#include <iostream>

using namespace std;

char board[50][50];

char c1[8][8] = {{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

char c2[8][8] = {{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
                 {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
                 {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};

int paint_count(int a, int b) {
  int count_c1 = 0, count_c2 = 0;

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (board[a + i][b + j] != c1[i][j])
        count_c1++;

      if (board[a + i][b + j] != c2[i][j])
        count_c2++;
    }
  }

  int ret = min(count_c1, count_c2);

  return ret;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int m, n;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> board[i][j];
    }
  }

  int repaint = 100;

  for (int i = 0; i <= n - 8; i++) {
    for (int j = 0; j <= m - 8; j++) {
      repaint = min(repaint, paint_count(i, j));
    }
  }

  cout << repaint << "\n";

  return 0;
}