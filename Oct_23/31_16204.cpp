#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  cout << min(m, k) + min(n - m, n - k) << "\n";

  return 0;
}