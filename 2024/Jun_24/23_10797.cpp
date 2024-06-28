#include <iostream>

using namespace std;

int main() {
  int d;
  cin >> d;

  int car_num[5];
  for (int i = 0; i < 5; i++) {
    cin >> car_num[i];
  }

  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    if (car_num[i] == d)
      cnt++;
  }

  cout << cnt << "\n";

  return 0;
}