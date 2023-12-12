// 에라토스테네스의 체
#include <iostream>

using namespace std;
int m, n;
int number[1000001] = {
    0,
};

void Eratos(int a, int b) {
  for (int i = 2; i <= b; i++) {
    number[i] = i;
  }
  for (int i = 2; i <= b; i++) {
    if (number[i] == 0)
      continue;

    for (int j = 2 * i; j <= b; j += i) {
      number[j] = 0;
    }
  }
  for (int i = a; i <= b; i++) {
    if (number[i] != 0)
      cout << number[i] << '\n';
  }
};

int main() {
  cin >> m >> n;

  Eratos(m, n);

  return 0;
}
