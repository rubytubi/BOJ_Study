#include <iostream>

using namespace std;

int n, m;
int num[8];
int ans[8];

void dfs(int d) {
  if (d == m) {
    for (int i = 0; i < m; i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
    return;
  }

  for (int i = 1; i <= n; i++) {
    num[i] = 1;
    ans[d] = i;
    dfs(d + 1);
    num[i] = 0;
  }
}

int main() {
  cin >> n >> m;

  dfs(0);
  return 0;
}