#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long long n;
  cin >> n;

  vector<long long> dice(6);

  for (int i = 0; i < 6; i++) {
    cin >> dice[i];
  }

  if (n == 1) {
    sort(dice.begin(), dice.end());

    long long sum = 0;
    for (int i = 0; i < 5; i++) {
      sum += dice[i];
    }
    cout << sum << "\n";
    return 0;
  }

  long long oneFace = 0, twoFace = 0, threeFace = 0;

  int m1 = min(dice[0], dice[5]);
  int m2 = min(dice[1], dice[4]);
  int m3 = min(dice[2], dice[3]);

  oneFace = min(min(m1, m2), m3);
  twoFace = min(min(m1 + m2, m2 + m3), m1 + m3);
  threeFace = m1 + m2 + m3;

  long long sum = 0;

  sum = (threeFace * 4) + (twoFace * (8 * n - 12)) +
        (oneFace * ((n - 2) * (n - 2) + 4 * (n - 2) * (n - 1)));

  cout << sum << "\n";

  return 0;
}