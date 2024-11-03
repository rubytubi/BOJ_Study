#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n[3];
  for (int i = 0; i < 3; i++) {
    cin >> n[i];
  }

  sort(n, n + 3);

  cout << n[2] + n[1] << endl;

  return 0;
}