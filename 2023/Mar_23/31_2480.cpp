#include <iostream>
using namespace std;

int main() {

  int a[3];
  int price = 0, max = 0;
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }

  if (a[0] == a[1] && a[1] == a[2]) {
    price = 10000 + a[0] * 1000;
  }

  else if (a[0] != a[1] && a[1] != a[2] && a[2] != a[0]) {
    for (int i = 0; i < 3; i++) {
      if (max < a[i])
        max = a[i];
    }
    price = 100 * max;
  }

  else {
    if (a[0] == a[1] || a[0] == a[2])
      price = 1000 + a[0] * 100;

    else
      price = 1000 + a[2] * 100;
  }

  cout << price << '\n';

  return 0;
}