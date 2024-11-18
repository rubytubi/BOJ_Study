#include <cstring>
#include <iostream>

using namespace std;

int cnt;

int main() {
  string str = "";
  cin >> str;

  for (int i = 0; i < str.size(); i++) {
    if (str[i] == 'A')
      cnt++;
  }

  cout << cnt << " : " << str.size() - cnt << "\n";

  return 0;
}