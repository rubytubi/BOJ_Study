#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long n, m, tree;
vector<long long> arr;

long long get_sum(long long mid) {
  long long count = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] - mid > 0)
      count += (arr[i] - mid);
  }

  return count;
}

long long binary_search(long long low, long long high) {
  long long mid;
  long long ret = 0;

  while (low <= high) {
    mid = (low + high) / 2;
    long long count = get_sum(mid);

    if (count < m)
      high = mid - 1;

    else {
      ret = mid;
      low = mid + 1;
    }
  }
  return ret;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long long max = 0, h, min = 9999999999;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> tree;
    arr.push_back(tree);
  }

  sort(arr.begin(), arr.end());

  long long high = arr.back();
  long long low = 0;

  cout << binary_search(low, high) << "\n";

  return 0;
}