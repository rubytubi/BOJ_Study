#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a0, a1, c, n0;
  bool ans = true;

  cin >> a1 >> a0 >> c >> n0;

  if (c < a1)
    ans = false;
  if ((c - a1) * n0 < a0)
    ans = false;

  if (ans == true)
    cout << '1' << '\n';
  else
    cout << '0' << '\n';

  return 0;
}