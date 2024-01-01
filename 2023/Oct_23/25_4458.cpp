#include <iostream>
#include <string>

using namespace std;

int main() {

  int test;
  cin >> test;

  string str;
  cin.ignore();

  for (int i = 0; i < test; i++) {
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
      str[0] = toupper(str[0]);
      cout << str[i];
    }
    cout << "\n";
  }
  return 0;
}
