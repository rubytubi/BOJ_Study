#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string str;
  vector<char> bracket;

  while (1) {
    getline(cin, str);

    if (str[0] == '.') // 종료 조건
      break;

    bracket.clear();

    bool check = true;

    for (int i = 0; i < str.size() - 1; i++) {
      if (str[i] == '(' || str[i] == '[') {
        bracket.push_back(str[i]);
      }

      else if (str[i] == ')') {
        if (!bracket.empty() && bracket.back() == '(') {
          bracket.pop_back();
        }

        else {
          check = false;
          break;
        }
      }

      else if (str[i] == ']') {
        if (!bracket.empty() && bracket.back() == '[') {
          bracket.pop_back();
        }

        else {
          check = false;
          break;
        }
      }
    }

    if (bracket.empty() && check) {
      cout << "yes\n";
    }

    else {
      cout << "no\n";
    }
  }

  return 0;
}
