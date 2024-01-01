#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k, count = 0, j;
  cin >> n >> k;

  j = n - 1;

  vector<int> coin(n);

  for (int i = 0; i < n; i++) {
    cin >> coin[i];
  }

  while (k != 0) {
    if (k >= coin[j]) {
      k -= coin[j];
      count++;
    }

    else
      j--;
  }

  cout << count << '\n';

  return 0;
}