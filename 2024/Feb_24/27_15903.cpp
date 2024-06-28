#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  priority_queue<long long, vector<long long>, greater<long long>> q;
  int num;

  for (int i = 0; i < n; i++) {
    cin >> num;
    q.push(num);
  }

  long long a = 0, b = 0;

  for (int i = 0; i < m; i++) {
    long long sum = 0;
    a = q.top();
    q.pop();
    b = q.top();
    q.pop();

    sum = a + b;

    q.push(sum);
    q.push(sum);
  }
  long long ans = 0;

  while (!q.empty()) {
    ans += q.top();
    q.pop();
  }

  cout << ans << "\n";

  return 0;
}