#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, a, b, c, d, e;
  int sum = 0;

  cin >> n;

  a = n / 10000;
  b = (n - a * 10000) / 1000;
  c = (n - a * 10000 - b * 1000) / 100;
  d = (n - a * 10000 - b * 1000 - c * 100) / 10;
  e = (n - a * 10000 - b * 1000 - c * 100 - d * 10);

  sum = pow(a, 5) + pow(b, 5) + pow(c, 5) + pow(d, 5) + pow(e, 5);

  cout << sum << '\n';

  return 0;
}