#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int ans = min(abs(a + d - (c + b)), abs(a + c - (b + d)));

  cout << ans << "\n";

  return 0;
}