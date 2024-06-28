#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> v[105];
bool visited[105];
int cnt;

// void dfs(int x) {
//   if (visited[x])
//     return;

//   visited[x] = true;
//   cnt++;

//   for (int i = 0; i < v[x].size(); i++) {
//     int y = v[x][i];

//     dfs(y);
//   }
// }

void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    cnt++;

    for (int i = 0; i < v[x].size(); i++) {
      int y = v[x][i];

      if (!visited[y]) {
        q.push(y);
        visited[y] = true;
      }
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    v[a].push_back(b);
    v[b].push_back(a);
  }

  //   dfs(1);
  //   cout << cnt - 1 << "\n";

  bfs(1);
  cout << cnt - 1 << "\n";

  return 0;
}