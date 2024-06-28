// dfs1
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool visited[100010];
vector<int> g[100010];
int count;
int ret[100010];

void dfs(int x) {
  if (visited[x]) // 종료 조건
    return;

  // 여기까지 온거면 방문 안함 -> 방문 처리
  visited[x] = true;
  count++;
  ret[x] = count;

  for (int i = 0; i < g[x].size(); i++) {
    int y = g[x][i];
    dfs(y);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, v;
  cin >> n >> m >> v;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    g[a].push_back(b);
    g[b].push_back(a);
  }

  for (int i = 0; i < 100'001; i++) {
    sort(g[i].begin(), g[i].end());
  }

  dfs(v);

  cout << "0\n";

  return 0;
}

// dfs2

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool visited[100010];
vector<int> v[100010];
int ret[100010];
int cnt = 1;

void dfs(int x) {
  if (visited[x])
    return;

  visited[x] = true;
  ret[x] = cnt;
  cnt++;

  for (int i = 0; i < v[x].size(); i++) {
    int y = v[x][i];
    dfs(y);
  }
}

int main() {
  int n, m, r;
  cin >> n >> m >> r;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    v[a].push_back(b);
    v[b].push_back(a);
  }

  for (int i = 0; i < 100001; i++) {
    sort(v[i].begin(), v[i].end());
  }

  dfs(cnt);

  for (int i = 1; i <= n; i++)
    cout << ret[i] << "\n";

  return 0;
}