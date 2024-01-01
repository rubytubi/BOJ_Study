#include <iostream>
#include <string>

using namespace std;

int main() {
  double n, t;
  string str;
  cin >> t;
  while (t--) {
    cin >> n;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
      switch (str[i]) {
      case '@':
        n *= 3;
        break;
      case '#':
        n -= 7;
        break;
      case '%':
        n += 5;
        break;
      }
    printf("%.2f\n", n);
  }
}