#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  int cnt = 0, y_cnt = 0;
  for (char ch : word) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      cnt++;
      y_cnt++;
    }

    else if (ch == 'y')
      y_cnt++;
  }

  cout << cnt << " " << y_cnt << "\n";

  return 0;
}
