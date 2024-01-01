// 플이:
// 1. 9개의 수를 다 더한 후 2중for 문을 이용해 하나씩 빼보기
#include <iostream>
using namespace std;

int main() {
  int n[9] = {
      0,
  };
  int sum = 0, num, a, b;

  for (int i = 0; i < 9; i++) {
    cin >> n[i];
    sum += n[i];
  }

  for (int i = 0; i < 9; i++) {
    num = sum;
    num -= n[i];
    for (int j = 0; j < 9; j++) {
      if (i == j)
        continue;
      else if (num - n[j] == 100) {
        a = i;
        b = j;
        break;
      }
    }
  }

  for (int i = 0; i < 9; i++) {
    if (i == a || i == b)
      continue;
    cout << n[i] << "\n";
  }

  return 0;
}