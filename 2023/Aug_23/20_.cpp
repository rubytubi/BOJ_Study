#include <algorithm>
#include <iostream>

using namespace std;

int package[1001];
int single[1001];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, pack, piece, m1, m2, m3;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> package[i] >> single[i];
  }

  pack = n / 6;
  piece = n % 6;

  sort(package, package + m);
  sort(single, single + m);

  if (n >= 6 && (n % 6 != 0)) {
    m1 = (pack + 1) * package[0];
  }

  else if (n >= 6 && n % 6 == 0) {
    m1 = pack * package[0];
  }

  else if (n < 6) {
    m1 = package[0];
  }

  m2 = pack * package[0] + piece * single[0];
  m3 = n * single[0];

  cout << min({m1, m2, m3}) << '\n';

  return 0;
}