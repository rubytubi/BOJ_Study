#include <iostream>
#include <queue>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int a;

  priority_queue<int> pq;

  while (n--) {
    cin >> a;
    if (a == 0) { // 아이 만남
      if (pq.empty()) {
        cout << "-1\n";
        continue;
      }
      int present = pq.top();
      cout << present << "\n";
      pq.pop();
    }

    else { // 거점 확보
      while (a--) {
        int temp;
        cin >> temp;
        pq.push(temp);
      }
    }
  }

  return 0;
}