#include <iostream>
#include <queue>

struct compare {
  bool operator()(int a, int b) {
    if (abs(a) == abs(b))
      return a > b;
    else
      return abs(a) > abs(b);
  }
};

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  priority_queue<int, vector<int>, compare> pq;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (num == 0) {
      if (pq.empty())
        cout << "0\n";

      else {
        cout << pq.top() << "\n";
        pq.pop();
      }
    }

    else
      pq.push(num);
  }

  return 0;
}