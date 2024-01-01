#include <iostream>

using namespace std;

int main() {
  int n, len;
  cin >> n;

  string str;
  for (int i = n; i > 0; i--) {
    cin >> str;
    len = str.size();
    len /= 2;
    if (str[len] == str[len - 1])
      cout << "Do-it\n";
    else
      cout << "Do-it-Not\n";
  }

  return 0;
}