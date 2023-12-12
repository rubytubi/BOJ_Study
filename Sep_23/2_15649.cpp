#include <iostream>

using namespace std;

int n, m;
int num[10];
int answer[10];

void dfs(int d) {
  if (d == m) { // 종료조건
    for (int j = 0; j < m; j++) {
      cout << answer[j] << " ";
    }
    cout << "\n";
    return;
  }

  int i = 1;
  while (i <= n) {
    if (!num[i]) {
      answer[d] = i;
      num[i] = 1;
      dfs(d + 1);
      num[i] = 0;
    }
    i++;
  }
}

int main(void) {
  cin >> n >> m;

  dfs(0);

  return 0;
}