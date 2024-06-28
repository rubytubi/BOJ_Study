#include <iostream>

using namespace std;

int main() {
  int y;
  cin >> y;
  cout << "A\n";

  return 0;
}

int zip1 = 15213;
int zip2 = 91125;

void call_swap() { swap(&zip1, &zip2); }

void swap(int *xp, int *yp) {
  int t0 = *xp;
  int t1 = *yp;

  *xp = t1;
  *yp = t0;
}