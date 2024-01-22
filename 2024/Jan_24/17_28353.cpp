#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  vector<int> w(n);

  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  sort(w.begin(), w.end());

  int start = 0, end = n - 1;
  int count = 0;
  while (start < end) {
    if (w[start] + w[end] <= k) {
      count++;
      start++;
      end--;
    } else {
      end--;
    }
  }

  cout << count << "\n";

  return 0;
}