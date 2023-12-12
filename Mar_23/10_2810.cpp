#include <iostream>
using namespace std;

int main() {
  int n, p = 0;
  char seat;
  double count = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> seat;
    if (seat == 'S')
      count++;
    else {
      p = 1;
      count += 0.5;
    }
  }

  if (p == 1)
    cout << count + 1 << "\n";
  else
    cout << count << "\n";

  return 0;
}