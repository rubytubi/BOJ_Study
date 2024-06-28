#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }

  int left = 0, right = v.size() - 1;
  int ret = 2000000000;
  int i, j;

  while (left < right) {
    long sum = v[left] + v[right];

    if (sum == 0) {
      cout << v[left] << " " << v[right] << "\n";
      return 0;
    }

    if (ret > abs(sum)) {
      ret = abs(sum);

      i = v[left];
      j = v[right];
    }

    if (sum >= 0)
      right -= 1;

    else
      left += 1;
  }

  cout << i << " " << j << "\n";

  return 0;
}