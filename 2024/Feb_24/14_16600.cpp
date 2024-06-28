#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  long long a;
  cin >> a;

  double s = sqrt(a);

  double p = 4 * s;

  cout << fixed << setprecision(10) << p << '\n';

  return 0;
}
