#include <cmath>
#include <iostream>

using namespace std;

int w, h, x, y, p;

int is_in(int a, int b) {
  if ((a >= x && a <= x + w) && (b >= y && b <= y + h)) // 직사각형
    return 1;
  else if (pow(h / 2, 2) >= pow(x - a, 2) + pow(y + h / 2 - b, 2) ||
           pow(h / 2, 2) >= pow(x + w - a, 2) + pow(y + h / 2 - b, 2)) // 원
    return 1;

  return 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int count = 0;
  int a, b;
  cin >> w >> h >> x >> y >> p;

  for (int i = 0; i < p; i++) {
    cin >> a >> b;
    count += is_in(a, b);
  }

  cout << count << "\n";

  return 0;
}