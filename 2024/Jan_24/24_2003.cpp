#include <iostream>

using namespace std;

int number[10010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> number[i];
  }

  int count = 0, start = 0, end = 0, sum = 0;

  while (end <= n) {
    if (sum >= m) {
      sum -= number[start];
      start++;
    }

    else if (sum < m) {
      sum += number[end];
      end++;
    }

    if (sum == m)
      count++;
  }

  cout << count << "\n";

  return 0;
}