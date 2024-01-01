#include <iostream>

using namespace std;

int answer[10] = {
    0,
};
int num[10] = {
    0,
};
int n, m;

void dfs(int d, int count) {
  // 종료조건
  if (d == m) {
    for (int i = 0; i < m; i++) {
      cout << answer[i] << " ";
    }
    cout << "\n";
    return;
  }
  for (int i = count; i <= n; i++) {
    if (!num[i]) {
      num[i] = 1;
      answer[d] = i;
      dfs(d + 1, i + 1);
      num[i] = 0;
    }
  }
}

int main() {
  cin >> n >> m;
  dfs(0, 1);

  return 0;
}