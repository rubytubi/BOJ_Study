#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int d = 7 * b + a;

  if (d >= 1 && d <= 30)
    cout << "1\n";

  else
    cout << "0\n";

  return 0;
}