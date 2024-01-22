#include <iostream>

using namespace std;

int dp[100010];
int seq[100010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int p = 1, m = 1, count = 0;

  if (n == 1 || n == 2) {
    for (int i = 0; i < n; i++) {
      cin >> seq[i];
    }
    cout << n << "\n";
    return 0;
  }

  else {
    cin >> seq[0];
    int tmp = seq[0];

    for (int i = 1; i < n; i++) {
      cin >> seq[i];

      if (seq[i] > tmp) {
        if (m > count)
          count = m;
        p++;
        m = 1;
      }

      else if (seq[i] < tmp) {
        if (p > count)
          count = p;
        m++;
        p = 1;
      }

      else {
        p++;
        m++;
      }

      if (p > count)
        count = p;

      if (m > count)
        count = m;

      tmp = seq[i];
    }
  }

  cout << count << "\n";

  return 0;
}