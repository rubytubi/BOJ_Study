#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double a;
  cin >> a;

  double p = 4 * sqrt(a);
  cout << fixed << setprecision(9) << p << endl;

  return 0;
}
