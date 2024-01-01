#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
// 12 8 -> 24
// gcd = 4    3 2
// 33 22 -> 66
// gcd = 11    3 2

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long long n, a, b;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    long long g = gcd(a, b);
    cout << (a * b) / g << "\n";
  }

  return 0;
}

// 1,000,000,000,000