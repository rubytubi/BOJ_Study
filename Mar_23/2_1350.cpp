#include <iostream>
using namespace std;

int main() {

  int n, cnt = 0;
  long long cluster, sum = 0;

  cin >> n;

  long long file[50];

  for (int i = 0; i < n; i++) {
    cin >> file[i];
  }
  cin >> cluster;

  for (int i = 0; i < n; i++) {

    if (file[i] == 0)
      continue;

    else if (file[i] > cluster) {

      if (file[i] % cluster != 0) {
        cnt = cnt + (file[i] / cluster) + 1;
      }

      else {
        cnt = cnt + (file[i] / cluster);
      }

    }

    else if (file[i] == cluster || file[i] < cluster) {
      cnt++;
    }
  }

  sum = cluster * cnt;

  cout << sum << "\n";

  return 0;
}
