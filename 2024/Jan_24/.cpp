#include <algorithm>
#include <iostream>

using namespace std;

int fac(int n) {
  if (n > 1)
    return fac(n - 1) * n;
  else
    return 1;
}

int main() {
  int n;
  cin >> n;

  cout << fac(n) << endl;

  return 0;
}