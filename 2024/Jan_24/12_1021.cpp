#include <deque>
#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, index, count = 0;
  deque<int> q;

  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    q.push_back(i);
  }

  int num;

  while (m--) {
    cin >> num;

    for (int i = 0; i < q.size(); i++) {
      if (q[i] == num) {
        index = i;
        break;
      }
    }

    if (index < (q.size() - index)) {
      while (1) {
        if (q.front() == num) {
          q.pop_front();
          break;
        }

        q.push_back(q.front());
        q.pop_front();
        count++;
      }
    }

    else {
      while (1) {
        if (q.front() == num) {
          q.pop_front();
          break;
        }

        q.push_front(q.back());
        q.pop_back();
        count++;
      }
    }
  }
  cout << count << "\n";

  return 0;
}