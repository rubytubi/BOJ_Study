#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k;
  cin >> n >> k;
  long long v, m, c;
  long long count = 0;
  vector<pair<long long, long long>> p;
  vector<long long> bag;
  priority_queue<long long> pq;

  for (int i = 0; i < n; i++) {
    cin >> m >> v;
    p.push_back(make_pair(m, v));
  }

  for (int i = 0; i < k; i++) {
    cin >> c;
    bag.push_back(c);
  }

  sort(p.begin(), p.end());

  sort(bag.begin(), bag.end());

  int j = 0;

  for (int i = 0; i < k; ++i) {

    while (j < n && p[j].first <= bag[i]) {
      pq.push(p[j].second);
      j++;
    }

    if (!pq.empty()) {
      count += pq.top();
      pq.pop();
    }
  }

  cout << count << "\n";

  return 0;
}
