#include <cmath>
#include <iostream>

using namespace std;

int n, ans;
int main() {

  cin >> n;

  int sx, sy, x, y, nx, ny;
  cin >> sx >> sy;
  x = sx, y = sy;

  for (int i = 0; i < n - 1; i++) {
    cin >> nx >> ny;
    ans += abs(nx + ny - x - y);
    x = nx, y = ny;
  }

  ans += abs(x + y - sx - sy);

  cout << ans << "\n";
  return 0;
}