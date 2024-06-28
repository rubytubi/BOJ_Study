#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int count = 1; // 연속된 숫자의 개수
  int maxCount = 1;

  for (int i = 0; i < n - 1; i++) {
    if (v[i] + 1 == v[i + 1])
      count++;

    else {
      maxCount = max(maxCount, count);
      count = 1;
    }
  }

  maxCount = max(count, maxCount);

  int ret = n - maxCount; // 대충 일단 필요한 숫자의 개수

  for (int i = 0; i < n - 1; i++) {
    if (v[i] + 2 == v[i + 1])
      ret--;
  }

  cout << ret << "\n";

  return 0;
}