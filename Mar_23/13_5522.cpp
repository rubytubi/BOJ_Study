#include <iostream>
using namespace std;

int main() {
  int a[5], sum = 0;

  for (int i = 0; i < 5; i++) {
    cin >> a[i];
    sum += a[i];
  }
  cout << sum << endl;

  return 0;
}