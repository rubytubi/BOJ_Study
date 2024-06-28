#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int k, d1, d2;
  cin >> k >> d1 >> d2;

  double n;

  if (d1 == d2) {
    cout << k * k << "\n";
    return 0;
  }

  if (d1 > d2)
    n = (double)(d1 - d2) / 2.0;

  else if (d1 < d2)
    n = (double)(d2 - d1) / 2.0;

  double h = k * k - n * n;

  cout << fixed << setprecision(6) << h << "\n";

  return 0;
}