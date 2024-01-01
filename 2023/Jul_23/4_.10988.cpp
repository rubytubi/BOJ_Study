#include <iostream>
#include <string>

using namespace std;

int main() {

  string str;
  cin >> str;

  int len = str.length();

  int count = 0;

  for (int i = 0; i < len / 2; i++) {
    if (str[i] == str[str.length() - 1 - i]) {
      count++;
    }
  }
  if (count == len / 2) {
    cout << "1\n";
  } else {
    cout << "0\n";
  }
  return 0;
}