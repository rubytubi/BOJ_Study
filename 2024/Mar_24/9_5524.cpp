#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  string input;

  for (int i = 0; i < n; ++i) {
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
      input[i] = tolower(input[i]);
    }
    cout << input << endl;
  }
  return 0;
}
