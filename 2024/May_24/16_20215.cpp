#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double w, h;
  double diag = 0, rect = 0;

  cin >> w >> h;

  rect = w + h;
  diag = sqrt(w * w + h * h);

  cout.precision(9);
  cout << rect - diag << "\n";

  return 0;
}