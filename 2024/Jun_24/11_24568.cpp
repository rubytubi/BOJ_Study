#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int ret = 8 * a + b * 3 - 28;
  if (ret >= 0)
    cout << ret << "\n";

  else {
    cout << "0\n";
  }

  return 0;
}