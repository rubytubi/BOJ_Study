#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, count = 0, M = 0;
  cin >> n;

  int num[10] = {
      0,
  };

  while (true) {
    num[n % 10]++;
    if (n / 10 == 0)
      break;
    n /= 10;
  }

  for (int i = 0; i < 10; i++) {
    if (i != 6 && i != 9)
      count = max(count, num[i]);
  }

  M = max(count, (num[6] + num[9] + 1) / 2);

  cout << M << "\n";

  return 0;
}