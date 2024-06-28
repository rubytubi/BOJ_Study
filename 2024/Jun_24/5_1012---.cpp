#include <iostream>
#include <queue>

using namespace std;

int n, m, k;
int board[55][55];
bool visited[55][55];
int cnt;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int x, int y) {
  queue<pair<int, int>> q;
  q.push(make_pair(x, y));
  visited[x][y] = true;

  while (!q.empty()) {
    int cur_x = q.front().first;
    int cur_y = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int nx = cur_x + dx[i];
      int ny = cur_y + dy[i];

      if (nx < 0 || nx >= m || ny < 0 || ny >= n)
        continue;

      if (visited[nx][ny] || board[nx][ny] == 0)
        continue;

      visited[nx][ny] = true;
      q.push(make_pair(nx, ny));
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {

    cin >> m >> n >> k;

    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      board[a][b] = 1;
    }

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (board[i][j] == 1 && !visited[i][j]) {
          bfs(i, j);
          cnt++;
        }
      }
    }

    cout << cnt << "\n";
    cnt = 0;
  }
  return 0;
}