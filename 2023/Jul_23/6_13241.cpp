#include <iostream>
using namespace std;

int gcd(long long a, long long b) {

  int x;

  while (b != 0) {
    x = a % b;
    a = b;
    b = x;
  }
  return a;
}

int main() {

  long long A, B;
  cin >> A >> B;

  int t = gcd(A, B);

  cout << A * B / t << "\n";

  return 0;
}