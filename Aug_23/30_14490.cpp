#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a, int b) {
  while (b > 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

int main() {
  int n, m, div;

  scanf("%d:%d", &n, &m);

  if (n > m)
    div = gcd(n, m);

  else
    div = gcd(m, n);

  cout << (n / div) << ":" << (m / div) << "\n";

  return 0;
}