#include <iostream>

using namespace std;

int number[10100];
int arr[10100];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int k = 0;
  for (int i = 1; i <= 10000; i++) {
    number[i] = i;
  }

  for (int i = 1; i <= 10000; i++) {
    if (i < 10) {
      k = number[i] + number[i];
      arr[k] = 1;
    }

    else if (i < 100) {
      k = number[i] + (number[i] / 10) + (number[i] % 10);
      arr[k] = 1;
    }

    else if (i < 1000) {
      k = number[i] + (number[i] / 100) + (number[i] % 100 / 10) +
          (number[i] % 10);
      arr[k] = 1;
    }

    else if (i < 10000) {
      k = number[i] + (number[i] / 1000) + (number[i] % 10) +
          (number[i] % 1000 / 100) + (number[i] % 100 / 10);
      arr[k] = 1;
    }

    else
      arr[10000] = 1;
  }

  for (int i = 1; i <= 10000; i++) {
    if (arr[i] == 0)
      cout << i << "\n";
  }

  return 0;
}