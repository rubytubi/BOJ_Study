#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  int n, m;

  while (t--) {
    cin >> n >> m;
    long long count = 1;
    int r = 1;

    for (int i = m; i > m - n; i--) {
      count *= i;
      count /= r++;
    }
    cout << count << "\n";
  }

  return 0;
}