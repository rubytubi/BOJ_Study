#include <iostream>

using namespace std;

int main() {

  int h, i, a, r, c;
  cin >> h >> i >> a >> r >> c;

  int ret = (h * i) - (a * r * c);
  cout << ret << "\n";

  return 0;
}