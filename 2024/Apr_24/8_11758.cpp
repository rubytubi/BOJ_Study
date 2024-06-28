#include <iostream>

using namespace std;

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
  int s = (x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x2 * y1 + x3 * y2);

  if (s > 0)
    return 1;

  else if (s == 0)
    return 0;

  else
    return -1;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  int slope = ccw(x1, y1, x2, y2, x3, y3);

  cout << slope << "\n";

  return 0;
}