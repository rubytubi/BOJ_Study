#include <iostream>
using namespace std;

int main() {
  int n, money, cnt = 0;
  cin >> n;

  money = 1000 - n;

  while (money != 0) {
    if (money >= 500) {
      cnt = cnt + money / 500;
      money = money - 500 * (money / 500);
    }

    else if (money >= 100) {
      cnt = cnt + money / 100;
      money = money - 100 * (money / 100);
    }

    else if (money >= 50) {
      cnt = cnt + money / 50;
      money = money - 50 * (money / 50);
    }

    else if (money >= 10) {
      cnt = cnt + money / 10;
      money = money - 10 * (money / 10);
    }

    else if (money >= 5) {
      cnt = cnt + money / 5;
      money = money - 5 * (money / 5);
    }

    else if (money >= 1) {
      cnt = cnt + money / 1;
      money = money - (money / 1);
    }
  }

  cout << cnt << "\n";

  return 0;
}