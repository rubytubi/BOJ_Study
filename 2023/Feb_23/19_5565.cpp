#include <iostream>
using namespace std;

int main() {
  int sum = 0, price, x;
  int book[9];

  cin >> price;

  for (int i = 0; i < 9; i++) {
    cin >> book[i];

    sum += book[i];
  }
  x = price - sum;

  cout << x << "\n";

  return 0;
}