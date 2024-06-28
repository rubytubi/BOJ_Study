#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  vector<int> point(n);

  for (int i = 0; i < n; i++) {
    cin >> point[i];
  }

  sort(point.begin(), point.end());

  for (int i = 0; i < m; i++) {
    int left = 0, right = n - 1;
    int start = 0, end = 0;
    int a, b;
    cin >> a >> b;

    while (left <= right) {
      int mid = (left + right) / 2;

      if (point[mid] < a)
        left = mid + 1;

      else
        right = mid - 1;
    }

    start = left;
    left = 0, right = n - 1;

    while (left <= right) {
      int mid = (left + right) / 2;

      if (point[mid] > b)
        right = mid - 1;

      else
        left = mid + 1;
    }

    end = right;

    cout << end - start + 1 << "\n";
  }

  return 0;
}