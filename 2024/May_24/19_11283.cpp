#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cin >> str;

  int n;
  n = ((str[0] & 255) - 234) * 4096 + ((str[1] & 255) - 176) * 64 +
      (str[2] & 255) - 127;
  cout << n << "\n";

  return 0;
}