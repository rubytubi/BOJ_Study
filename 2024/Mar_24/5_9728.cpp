#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  for (int j = 1; j <= t; j++) {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int count = 0;
    int start = 0, end = n - 1;

    while (start < end) {
      if (v[start] + v[end] == m) {
        count++;
        start++;
        end--;
      }

      else if (v[start] + v[end] > m)
        end--;

      else
        start++;
    }

    cout << "Case #" << j << ":"
         << " " << count << "\n";
  }

  return 0;
}