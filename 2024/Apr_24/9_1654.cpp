#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int k, n;
vector<int> v;

bool is_more_than(int cable) {
  int count = 0;

  for (int i = 0; i < v.size(); i++) {
    count += v[i] / cable;
  }

  if (count >= n)
    return true;

  else
    return false;
}

int main() {
  cin >> k >> n;

  for (int i = 0; i < k; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  long long left = 1, right = v[v.size() - 1];
  long long ret = 0;

  while (left <= right) {
    long long mid = (left + right) / 2;

    if (is_more_than(mid)) {
      ret = max(ret, mid);
      left = mid + 1;
    }

    else
      right = mid - 1;
  }

  cout << ret << "\n";

  return 0;
}
