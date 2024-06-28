#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  long long a;
  cin >> a;

  double r = sqrt(a / 3.14159265359);
  double area = pow(2 * (r + 1), 2);

  cout << fixed << setprecision(10) << area << endl;

  return 0;
}
