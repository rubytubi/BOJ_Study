#include <iostream>
using namespace std;
int main() {
  int a[10];
  int num[1001]{
      0,
  };
  int sum = 0, max = 0, mode = 0;
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
    sum += a[i];
    num[a[i]]++;
  }

  for (int i = 0; i <= 1000; i++) {
    if (num[i] > max) {
      max = num[i];
      mode = i;
    }
  }

  cout << sum / 10 << "\n";
  cout << mode << "\n";

  return 0;
}