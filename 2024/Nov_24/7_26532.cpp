#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int w, h;
  cin >> w >> h;

  int yard = w * h;
  double acer = yard / 4840.0;
  int ret = ceil(acer / 5.0);

  cout << ret << "\n";

  return 0;
}
