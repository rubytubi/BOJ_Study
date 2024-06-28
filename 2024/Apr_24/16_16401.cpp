#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int m, n;

bool binary_search(int mid) {
  int count = 0;
  for (int i = 0; i < v.size(); i++) {
    count += v[i] / mid;
  }

  if (count >= m)
    return true;

  else
    return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> m >> n;

  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    v.push_back(s);
  }

  sort(v.begin(), v.end());

  int left = 1, right = v[v.size() - 1];
  int ret = 0;

  while (left <= right) {
    int mid = (left + right) / 2;

    if (binary_search(mid)) {
      ret = max(mid, ret);
      left = mid + 1;
    }

    else
      right = mid - 1;
  }

  cout << ret << "\n";

  return 0;
}