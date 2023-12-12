#include <iostream>
using namespace std;

int main() {
  int num[7], sum = 0, min = 100;

  for (int i = 0; i < 7; i++) {
    cin >> num[i];

    if (num[i] % 2 != 0) {
      sum += num[i];
    }
  }

  for (int i = 0; i < 7; i++) {
    if (num[i] % 2 != 0) {
      if (min > num[i])
        min = num[i];
    }
  }

  if (sum == 0)
    cout << "-1\n";

  else
    cout << sum << "\n" << min << "\n";

  return 0;
}