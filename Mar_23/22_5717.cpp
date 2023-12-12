#include <iostream>
using namespace std;

int main() {
  int m, f;

  for (int i = 0;; i++) {
    cin >> m >> f;
    if (m != 0 && f != 0)
      cout << m + f << endl;

    else
      break;
  }

  return 0;
}