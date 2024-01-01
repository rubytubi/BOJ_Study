#include <iostream>
#include <queue>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  queue<int> q;

  for (int i = 1; i <= n; i++) {
    q.push(i);
  }

  while (q.size() != 1) {
    q.pop();
    int tmp = q.front();
    q.push(tmp);
    q.pop();
    if (q.size() == 1) {
      break;
    }
  }

  cout << q.front() << '\n';

  return 0;
}