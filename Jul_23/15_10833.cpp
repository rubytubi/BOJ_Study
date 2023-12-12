#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int a, b, sum = 0;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;

    if (a < b)
      sum += b % a;
    else if (a > b)
      sum += b;
  }
  cout << sum;

  return 0;
}