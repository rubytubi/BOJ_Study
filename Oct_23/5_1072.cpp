#include <iostream>

#define MAX 1000000000

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long long int x, y, z;

  cin >> x >> y;
  z = y * 100 / x;

  if (z >= 99) {
    cout << "-1\n";
    return 0;
  }

  long long int low = 0, high = MAX;

  while (low <= high) {
    long long int mid = (low + high) / 2;
    long long int rate = (y + mid) * 100 / (x + mid);

    if (rate > z)
      high = mid - 1;
    else
      low = mid + 1;
  }

  cout << low << "\n";

  return 0;
}