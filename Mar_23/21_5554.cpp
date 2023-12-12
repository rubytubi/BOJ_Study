#include <iostream>
using namespace std;

int main() {
  int m = 0, s = 0;
  int n = 0, sum = 0;

  for (int i = 0; i < 4; i++) {
    cin >> n;
    sum = sum + n;
  }
  m = sum / 60;
  s = sum % 60;

  cout << m << '\n' << s << '\n';

  return 0;
}