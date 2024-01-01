#include <iostream>
using namespace std;

int main() {
  int l, a, b, c, d;
  int korean, math;
  int count = 0;

  cin >> l >> a >> b >> c >> d;

  // a c     b d

  for (int i = 1; i <= 40; i++) {
    korean = c * i;
    math = d * i;
    count++;

    if (korean >= a && math >= b)
      break;
  }
  l = l - count;
  cout << l << "\n";

  return 0;
}