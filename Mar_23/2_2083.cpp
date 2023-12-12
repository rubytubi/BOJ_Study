#include <iostream>
using namespace std;

int main() {
  int burgers[3];
  int beverages[2];
  int cburger = 9999;
  int cbeverage = 9999;

  for (int i = 0; i < 3; i++) {
    cin >> burgers[i];

    if (burgers[i] < cburger)
      cburger = burgers[i];
  }

  for (int i = 0; i < 2; i++) {
    cin >> beverages[i];

    if (beverages[i] < cbeverage)
      cbeverage = beverages[i];
  }

  cout << cbeverage + cburger - 50;

  return 0;
}