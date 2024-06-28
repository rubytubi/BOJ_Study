#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> sw(n);
  vector<int> sp(n);

  for (int i = 0; i < n; i++) {
    cin >> sw[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> sp[i];
  }

  int sw_sum = 0;
  int sp_sum = 0;
  int k = 0;

  for (int i = 0; i < n; i++) {
    sw_sum += sw[i];
    sp_sum += sp[i];
    if (sw_sum == sp_sum) {
      k = i + 1;
    }
  }

  cout << k << "\n";

  return 0;
}
