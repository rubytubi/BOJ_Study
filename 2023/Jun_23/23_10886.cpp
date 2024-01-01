#include <iostream>
using namespace std;
int main() {
  int n, t, count = 0, ncount = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    if (n == 0)
      ncount++;
    else
      count++;
  }
  if (ncount > count) {
    cout << "Junhee is not cute!\n";
  } else
    cout << "Junhee is cute!\n";
}