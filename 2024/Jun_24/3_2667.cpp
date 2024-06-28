#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int board[30][30];
bool visited[30][30];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int n;
int cnt;
vector<int> v;

void dfs(int x, int y) {

  visited[x][y] = true;
  cnt++;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny] &&
        board[nx][ny] == 1)
      dfs(nx, ny);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    for (int j = 0; j < n; j++) {
      board[i][j] = str[j] - '0';
    }
  }

  int complex = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (board[i][j] == 1 && !visited[i][j]) {
        cnt = 0;
        dfs(i, j);
        v.push_back(cnt);
        complex++;
      }
    }
  }

  sort(v.begin(), v.end());

  cout << complex << "\n";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "\n";
  }

  return 0;
}