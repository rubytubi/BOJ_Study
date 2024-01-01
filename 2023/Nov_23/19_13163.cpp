#include <iostream>
#include <string>

using namespace std;

int main() {

  int n, s_index, len;
  cin >> n;
  cin.ignore();
  while (n--) {
    string str;
    getline(cin, str);
    len = str.length();
    for (int i = 0; i < len; i++) {
      if (str[i] == ' ') {
        s_index = i;
        break;
      }
    }

    cout << "god";

    for (int i = s_index + 1; i < len; i++) {
      if (str[i] == ' ')
        continue;
      cout << str[i];
    }
    cout << '\n';
  }

  return 0;
}
