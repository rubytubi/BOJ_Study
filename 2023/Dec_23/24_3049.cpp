#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int ret = 0;
  ret = n * (n - 1) * (n - 2) * (n - 3) / 24;

  cout << ret << endl;

  return 0;
}