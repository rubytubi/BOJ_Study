#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "WelcomeToSMUPC";

  int n;
  cin >> n;

  cout << str[(n - 1) % str.length()] << "\n";

  return 0;
}
