#include <iostream>

using namespace std;

int gcd(int a, int b) {
  int x;

  while (b != 0) {
    x = a % b;
    a = b;
    b = x;
  }
  return a;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int a1, b1, a2, b2;
  cin >> a1 >> b1 >> a2 >> b2;

  int mol, den;
  mol = a1 * b2 + a2 * b1;
  den = b1 * b2;

  int t = gcd(mol, den);

  cout << mol / t << ' ' << den / t << '\n';

  return 0;
}