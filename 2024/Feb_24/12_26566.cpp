#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a1, p1, r1, p2;
    cin >> a1 >> p1 >> r1 >> p2;

    double slice = static_cast<double>(a1) / p1;
    double pizza = 3.14159265358979323846 * r1 * r1 / p2;

    if (slice > pizza)
      cout << "Slice of pizza" << endl;

    else
      cout << "Whole pizza" << endl;
  }

  return 0;
}
