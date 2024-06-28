#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < n * n; i++) {
    int num;
    cin >> num;

    pq.push(num);
    if (pq.size() > n)
      pq.pop();
  }

  cout << pq.top() << "\n";

  return 0;
}