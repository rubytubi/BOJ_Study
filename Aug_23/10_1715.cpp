#include <iostream>
#include <queue>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, card, sum = 0, count = 0;
  cin >> n;

  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < n; i++) {
    cin >> card;
    pq.push(card);
  }

  if (n == 1) {
    cout << "0\n";
  }

  else {
    while (pq.size() > 1) {
      count = pq.top();
      pq.pop();
      count += pq.top();
      pq.pop();
      sum += count;
      pq.push(count);
    }

    cout << sum << '\n';
  }

  return 0;
}