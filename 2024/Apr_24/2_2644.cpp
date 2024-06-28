#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v[101];
int visited[101];
int ret;

void dfs(int start, int end, int cnt) {
  visited[start] = 1;

  if (start == end) // 종료 조건
    ret = cnt;

  for (int i = 0; i < v[start].size();
       i++) { // v[start].size() -> start노드에 연결된 노드들의 수.
    int next = v[start][i];

    if (!visited[next])
      dfs(next, end, cnt + 1);
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, x, y;
  cin >> n;
  cin >> x >> y;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  dfs(x, y, 0);

  if (ret != 0)
    cout << ret << "\n";

  else
    cout << "-1\n";

  return 0;
}