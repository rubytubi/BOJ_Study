#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int total = 0;
  for (int i = 0; i < n; ++i) {
    int w, h;
    cin >> w >> h;

    switch (w) {
    case 136:
      total += 1000;
      break;
    case 142:
      total += 5000;
      break;
    case 148:
      total += 10000;
      break;
    case 154:
      total += 50000;
      break;
    }
  }

  cout << total << endl;

  return 0;
}
