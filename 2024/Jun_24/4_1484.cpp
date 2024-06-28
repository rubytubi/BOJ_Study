#include <cmath>
#include <iostream>

using namespace std;

bool flag = false;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int g;
  cin >> g;

  long long start = 1, end = 1;

  while (true) {
    double n = pow(end, 2) - pow(start, 2);
    if (n == g) {
      cout << end << "\n";
      flag = true;
    }
    if (end - start == 1 && n > g) //  종료 조건
      break;

    if (n > g) // 차이 감소시키기
      start++;

    else // 차이 증가시키기
      end++;
  }

  if (!flag)
    cout << "-1\n";

  return 0;
}