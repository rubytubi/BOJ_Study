#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long n, m, t;
vector<unsigned long long> v;

bool parametric_search(unsigned long long x) {
  unsigned long long count = 0;

  for (int i = 0; i < v.size(); i++) {
    count += x / v[i];
  }

  if (count >= m)
    return true;

  else
    return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  unsigned long long left = 0, right = v[v.size() - 1] * m;
  unsigned long long ret;

  while (left <= right) {
    unsigned long long mid = (left + right) / 2;

    if (parametric_search(mid)) { // 충분 -> 시간 단축
      ret = mid;
      right = mid - 1;
    }

    else // 시간 늘려서
      left = mid + 1;
  }

  cout << ret << "\n";

  return 0;
}