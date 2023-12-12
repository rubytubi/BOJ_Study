#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int a[4], i = 4;

  while (i--)
    cin >> a[i];

  sort(a, a + 4);
  cout << a[0] * a[2] << endl;

  return 0;
}