#include <iostream>

using namespace std;

int main() {
  int k;
  cin >> k;

  int a[45] = {
      0,
  };
  int b[45] = {
      0,
  };

  a[0] = 1;
  b[0] = 0;
  a[1] = 0;
  b[1] = 1;
  a[2] = 1;
  b[2] = 2;
  for (int i = 2; i <= k; i++) {
    a[i] = b[i - 1];
    b[i] = a[i - 1] + b[i - 1];
  }
  cout << a[k] << ' ' << b[k] << "\n";

  return 0;
}