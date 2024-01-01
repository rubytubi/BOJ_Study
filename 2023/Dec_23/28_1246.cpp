#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, a = 0;
  cin >> n >> m;

  vector<int> p(m);

  for (int i = 0; i < m; i++) {
    cin >> p[i];
  }

  sort(p.rbegin(), p.rend());

  int index;

  for (int i = 0; i < m; i++) {
    if (i < n) {
      if (p[i] * (i + 1) > a) {
        a = p[i] * (i + 1);
        index = i;
      }
    } else
      break;
  }

  cout << p[index] << " " << a << "\n";

  return 0;
}