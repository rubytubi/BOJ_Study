#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "", temp = "";
  int answer = 0;
  bool check = false;

  cin >> str;

  for (int i = 0; i <= str.size(); i++) {
    if (str[i] == '+' || str[i] == '-' || i == str.size()) {
      if (check == true) {
        answer -= stoi(temp);
        temp = "";
      }

      else {
        answer += stoi(temp);
        temp = "";
      }
    }

    else
      temp += str[i];

    if (str[i] == '-' && i < str.size())
      check = true;
  }
  cout << answer << '\n';

  return 0;
}
