#include <iostream>
using namespace std;

int main() {
  int num[5];
  int sum = 0, av;

  for (int i = 0; i < 5; i++) {
    cin >> num[i];

    if (num[i] < 40)
      num[i] = 40;

    sum += num[i];
  }

  av = sum / 5;

  cout << av << "\n";

  return 0;
}