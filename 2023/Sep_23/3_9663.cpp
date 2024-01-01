#include <iostream>

using namespace std;

int n;
int cnt = 0;
int board[15][15] = {
    0,
};

int check(int row, int col) {
  int i = 0;
  for (i = 0; i < row; i++) {
    if (board[i][col])
      return 0;
  }

  for (int i = 0; i <= row && i <= col; i++) {
    if (board[row - i][col - i] == 1)
      return 0;
  }

  for (int i = 0; i <= row && i <= (n - col); i++) {
    if (board[row - i][col + i] == 1)
      return 0;
  }
  return (1);
}

void dfs(int d) {
  // 종료 조건
  if (d == n) {
    cnt++;
    return;
  }

  else {
    for (int i = 0; i < n; i++) {
      if (check(d, i)) {
        board[d][i] = 1;
        dfs(d + 1);
      }
      board[d][i] = 0; // 초기화
    }
  }
}

int main() {
  cin >> n;
  dfs(0);
  cout << cnt << '\n';
}