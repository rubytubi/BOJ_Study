#include <deque>
#include <iostream>

using namespace std;

deque<int> dq;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k, m;
  cin >> n >> k >> m;

  for (int i = 1; i <= n; i++) {
    dq.push_back(i);
  }
  bool flag = true;
  int count = 0;

  while (!dq.empty()) {
    if (flag) {
      for (int i = 0; i < k - 1; i++) {
        dq.push_back(dq.front());
        dq.pop_front();
      }

      cout << dq.front() << "\n";
      dq.pop_front();
    }

    else {
      for (int i = 0; i < k - 1; i++) {
        dq.push_front(dq.back());
        dq.pop_back();
      }
      cout << dq.back() << "\n";
      dq.pop_back();
    }
    count++;

    if (count == m) {
      flag = !flag;
      count = 0;
    }
  }

  return 0;
}