#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int weight = 0, count = 0;

  if (n <= 7) {
    if (n == 3 || n == 5)
      cout << "1\n";
    else if (n == 6)
      cout << "2\n";
    else
      cout << "-1\n";
  }

  else {
    while (true) {
      if (weight < n) {
        weight += 5;
        count += 1;
      }

      else if (weight > n) {
        weight -= 5;
        weight += 3;
      }

      else if (weight == n) {
        cout << count << '\n';
        break;
      }
    }
  }

  return 0;
}