#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string str;

  cin >> n;
  cin >> str;

  for (int i = 0; i < n; i++) {
    if (str[i] == 'l')
      str[i] = 'L';

    else if (str[i] == 'I')
      str[i] = 'i';
  }

  cout << str << endl;

  return 0;
}
