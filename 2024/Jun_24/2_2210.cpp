#include <algorithm>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int board[5][5];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
set<int> num_set;

void dfs(int x, int y, int n, int d) {
  if (d == 5) {
    num_set.insert(n);
    return;
  }

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5)
      dfs(nx, ny, n * 10 + board[nx][ny], d + 1);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> board[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      dfs(i, j, board[i][j], 0);
    }
  }

  cout << num_set.size() << "\n";

  return 0;
}