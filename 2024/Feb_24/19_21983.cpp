#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double area;
  cin >> area;

  double side = sqrt(area * 2 / (3 * sqrt(3)));
  double ans = 6 * side;

  cout << fixed << setprecision(6) << ans << "\n";

  return 0;
}