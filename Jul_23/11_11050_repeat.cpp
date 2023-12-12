// 반복
#include <iostream>
using namespace std;

int factorial(int num) {
  int result = 1;
  for (int i = num; i > 0; i--) {
    result *= i;
  }
  return result;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << factorial(n) / (factorial(k) * factorial(n - k)) << '\n';

  return 0;
}