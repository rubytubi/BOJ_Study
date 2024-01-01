#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, num, k;
  cin >> n >> k;
  vector<int> m;

  for (int i = 0; i < n; i++) {
    cin >> num;
    m.push_back(num);
  }

  sort(m.begin(), m.end());

  cout << m[k - 1] << "\n";

  return 0;
}
