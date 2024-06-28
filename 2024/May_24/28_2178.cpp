#include <iostream>
#include <queue>
#include <string>

using namespace std;

int board[101][101];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool visited[101][101];
int d[101][101];

int n, m;

void bfs(int sx, int sy) {
  queue<pair<int, int>> q;
  q.push(make_pair(sx, sy));
  visited[sx][sy] = true;
  d[sx][sy] = 1;

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;

    q.pop();

    for (int i = 0; i < 4; i++) {
      int curr_x = x + dx[i];
      int curr_y = y + dy[i];

      if ((curr_x >= 0 && curr_x < n) && (curr_y >= 0 && curr_y < m) &&
          !visited[curr_x][curr_y] && board[curr_x][curr_y] == 1) {

        visited[curr_x][curr_y] = true;

        q.push(make_pair(curr_x, curr_y));
        d[curr_x][curr_y] = d[x][y] + 1;
      }
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for (int j = 0; j < m; j++) {
      board[i][j] = str[j] - '0';
    }
  }

  bfs(0, 0);

  cout << d[n - 1][m - 1] << "\n";

  return 0;
}