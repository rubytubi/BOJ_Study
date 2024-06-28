#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool visited[1010];
vector<int> graph[1010];

void bfs(int start) {
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    cout << x << " ";

    for (int i = 0; i < graph[x].size(); i++) {
      int y = graph[x][i];

      if (!visited[y]) {
        q.push(y);
        visited[y] = true;
      }
    }
  }
}

void dfs(int x) {
  visited[x] = true;
  cout << x << " ";

  for (int i = 0; i < graph[x].size(); i++) {
    int y = graph[x][i];

    if (!visited[y]) {
      dfs(y);
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  // 노드, 엣지, 시작노드
  int n, m, v;
  cin >> n >> m >> v;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for (int i = 0; i < 1001; i++) {
    sort(graph[i].begin(), graph[i].end());
  }

  dfs(v);

  for (int i = 0; i < 1001; i++) {
    visited[i] = false;
  }

  cout << "\n";

  bfs(v);

  return 0;
}