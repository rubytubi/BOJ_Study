#include <iostream>
using namespace std;

int main() {

  int mk[4], sumk = 0;
  int mg[4], sumg = 0;

  for (int i = 0; i < 4; i++) {
    cin >> mk[i];
    sumk += mk[i];
  }

  for (int i = 0; i < 4; i++) {
    cin >> mg[i];
    sumg += mg[i];
  }

  if (sumk <= sumg)
    cout << sumg << "\n";

  else
    cout << sumk << "\n";

  return 0;
}