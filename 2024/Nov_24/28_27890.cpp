#include <iostream>

using namespace std;

int main() {
  int x, n;
  cin >> x >> n;

  for (int i = 0; i < n; i++) {
    if (x % 2 == 0)
      x = (x / 2) ^ 6;
    else
      x = (2 * x) ^ 6;
  }

  cout << x << "\n";

  return 0;
}
