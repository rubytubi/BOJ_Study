#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(long long x) {
  for (int i = 2; i <= sqrt(x); i++) {
    if ((x % i) == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long long n, num, j;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> num;
    j = num;
    while (1) {

      if (j < 2) {
        cout << "2\n";
        break;
      }
      if (isPrime(j) == true) {
        cout << j << '\n';
        break;
      }
      j++;
    }
  }

  return 0;
}