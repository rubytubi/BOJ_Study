#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  double w, h;
  cin >> w >> h;

  double ret = (w * h) * 0.5;
  cout << fixed << setprecision(1) << ret << endl;

  return 0;
}
