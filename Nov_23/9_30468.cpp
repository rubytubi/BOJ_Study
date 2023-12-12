#include <iostream>

using namespace std;

int main() {
  int n, STR, DEX, INT, LUK;
  cin >> STR >> DEX >> INT >> LUK >> n;

  if ((STR + DEX + INT + LUK) >= n * 4)
    cout << "0\n";

  else
    cout << (n * 4) - (STR + DEX + INT + LUK) << "\n";

  return 0;
}