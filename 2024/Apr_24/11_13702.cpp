#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, k;
vector<int> v;

bool can_pour(int x) {
  int count = 0;

  for (int i = 0; i < v.size(); i++) {
    count += v[i] / x;
  }

  if (count >= k)
    return true;

  else
    return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  sort(v.begin(), v.end());

  long long left = 1, right = v[n - 1];
  long long ret = 0;

  while (left <= right) {
    long long mid = (left + right) / 2;

    if (can_pour(mid)) {
      ret = max(ret, mid);
      left = mid + 1;
    }

    else
      right = mid - 1;
  }

  cout << ret << "\n";

  return 0;
}