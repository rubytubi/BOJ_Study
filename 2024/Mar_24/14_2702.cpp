#include <iostream>

using namespace std;

int gcd(int a, int b) {
  int ret;
  while (b != 0) {
    ret = a % b;
    a = b;
    b = ret;
  }
  return a;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int x, y;

  for (int i = 0; i < n; i++) {
    cin >> x >> y;

    cout << (x * y) / gcd(x, y) << " ";
    cout << gcd(x, y) << "\n";
  }

  return 0;
}