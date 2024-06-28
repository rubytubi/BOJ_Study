#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;

  double s = sqrt(w * w + h * h);

  while (n--) {
    int t;
    cin >> t;

    if (t <= s)
      cout << "DA\n";

    else
      cout << "NE\n";
  }

  return 0;
}