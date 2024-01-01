#include <iostream>
#include <string>

using namespace std;

bool is_2023(int n) {
  int num[4] = {3, 2, 0, 2};
  int pos = 0;

  while (n > 0) {
    if (n % 10 == num[pos]) {
      pos++;
      if (pos == 4)
        return true;
    }
    n /= 10;
  }
  return false;
}

int main() {
  int n;
  cin >> n;

  int count = 0;

  if (n < 2023) {
    cout << 0 << "\n";
  } else {
    for (int i = 2023; i <= n; i++) {
      if (is_2023(i))
        count++;
    }
    cout << count << "\n";
  }

  return 0;
}