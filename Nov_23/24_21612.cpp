

#include <iostream>

using namespace std;

int sea = 100;

int main() {

  int b;
  cin >> b;

  int p = 5 * b - 400;
  cout << p << "\n";

  if (p < sea)
    cout << 1 << '\n';

  else if (p > sea)
    cout << -1 << "\n";

  else
    cout << 0 << "\n";

  return 0;
}
