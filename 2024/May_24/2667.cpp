#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int arr[30][30];
bool visited[30][30];
int complex;
int cnt;
vector<int> ret;
int row

    void
    bfs(int x, , int y) {
  queue<pair<int, int>> q;
  q.push(x, y);
  visited[x][y] = true;
  cnt++;

  while (!q.empty()) {
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> arr[i][j];
    }
  }

  return 0;
}