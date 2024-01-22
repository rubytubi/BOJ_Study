#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> pos(n);

  for (int i = 0; i < n; i++) {
    cin >> pos[i];
  }

  sort(pos.begin(), pos.end());

  int ret = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int d1 = pos[j] - pos[i];
        int d2 = pos[k] - pos[j];
        if (d1 <= d2 && d2 <= 2 * d1) {
          ret++;
        }
      }
    }
  }

  cout << ret << endl;

  return 0;
}
