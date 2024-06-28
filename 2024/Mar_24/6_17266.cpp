#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> v(n + 1);

  int point[100001] = {
      0,
  };

  for (int i = 0; i < m; i++) {
    cin >> point[i];
  }

  int d = point[0]; // 0 ~ 첫번째 위치까지 거리

  if (m == 1 && point[0] == 0) {
    cout << n << "\n";
    return 0;
  }

  if (m == 1)
    d = point[0];

  else {

    for (int i = 1; i < m; i++) {
      d = max(d, point[i] - point[i - 1]);
    }
  }

  int c = max(point[0], n - point[m - 1]);

  if (d % 2 == 0)
    d /= 2;

  else
    d = d / 2 + 1;

  if (c > d)
    cout << c << "\n";

  else
    cout << d << "\n";

  return 0;
}