#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> num(n);

  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  sort(num.rbegin(), num.rend());

  for (int i = 0; i < n; i++) {
    cout << num[i] << "\n";
  }

  return 0;
}