#include <iostream>
using namespace std;

int main() {
  char str[100] = {
      0,
  };
  cin >> str;
  char n[100] = {
      0,
  };

  n[0] = str[0];

  for (int i = 0; i < 100; i++) {
    if (str[i] == 45) {
      n[i] = str[i + 1];
    }
  }

  for (int i = 0; i < 100; i++) {
    if (n[i] != 0) {
      cout << n[i];
    }
  }
  cout << "\n";

  return 0;
}