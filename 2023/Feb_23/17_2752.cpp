#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  int num[3];

  for (int i = 0; i < 3; i++) {
    cin >> num[0] >> num[1] >> num[2];
  }

  sort(num, num + 3);

  for (int i = 0; i < 3; i++) {
    cout << num[i] << " ";
  }
  cout << "\n";

  return 0;
}