#include <iostream>

using namespace std;

int main() {
  int n, count = 1;
  cin >> n;

  while (n--) {
    count *= 2;
  }

  cout << count << "\n";

  return 0;
}