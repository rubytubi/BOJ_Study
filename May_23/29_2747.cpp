#include <iostream>
using namespace std;

int main() {

  int a[45] = {
      0,
  };
  a[0] = 0;
  a[1] = 1;

  for (int i = 2; i <= 45; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }

  int n = 0;
  cin >> n;

  cout << a[n] << "\n";

  return 0;
}