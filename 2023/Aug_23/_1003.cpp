#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n,
      zero[41] =
          {
              0,
          },
      one[41] = {
          0,
      };

  cin >> t;

  zero[0] = 1;
  zero[1] = 0;
  zero[2] = 1;
  one[0] = 0;
  one[1] = 1;
  one[2] = 1;

  for (int i = 3; i <= 40; i++) {
    zero[i] = zero[i - 1] + zero[i - 2];
    one[i] = one[i - 1] + one[i - 2];
  }

  for (int i = 0; i < t; i++) {
    cin >> n;
    cout << zero[n] << ' ' << one[n] << '\n';
  }

  return 0;
}