#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, p1w = 0, p2w = 0;
    char p1, p2;

    cin >> n;

    while (n--) {

      cin >> p1 >> p2;
      if (p1 == 'R') {
        if (p2 == 'R') {
          p1w++;
          p2w++;
        } else if (p2 == 'P')
          p2w++;
        if (p2 == 'S')
          p1w++;
      } else if (p1 == 'P') {
        if (p2 == 'R')
          p1w++;
        else if (p2 == 'P') {
          p1w++;
          p2w++;
        }
        if (p2 == 'S')
          p2w++;
      } else if (p1 == 'S') {
        if (p2 == 'R')
          p2w++;
        else if (p2 == 'P')
          p1w++;
        if (p2 == 'S') {
          p1w++;
          p2w++;
        }
      }
    }
    if (p1w > p2w)
      cout << "Player 1" << '\n';
    else if (p2w > p1w)
      cout << "Player 2" << '\n';
    else
      cout << "TIE" << '\n';
  }

  return 0;
}