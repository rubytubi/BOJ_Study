#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> num;
  int number, ret = 0;

  for (int i = 0; i < n; i++) {
    cin >> number;
    num.push_back(number);
  }

  sort(num.begin(), num.end());

  int minimum = 2147483647;

  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (j == i)
        continue;
      count += abs(num[i] - num[j]);
    }
    if (minimum > count) {
      minimum = min(minimum, count);
      ret = num[i];
    }
  }

  cout << ret << "\n";

  return 0;
}
