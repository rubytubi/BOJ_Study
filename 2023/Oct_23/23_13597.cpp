#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == b)
    cout << a << "\n";

  else
    a > b ? cout << a << "\n" : cout << b << '\n';

  return 0;
}