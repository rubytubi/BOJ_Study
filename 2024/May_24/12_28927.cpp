#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  int x, y, z;
  cin >> a >> b >> c;
  cin >> x >> y >> z;

  int ax = a * 3 + b * 20 + c * 120;
  int el = x * 3 + y * 20 + z * 120;

  if (ax > el)
    cout << "Max\n";

  else if (ax == el)
    cout << "Draw\n";

  else
    cout << "Mel\n";

  return 0;
}