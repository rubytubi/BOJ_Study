#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, a, b;

  cin >> t;
  while (t--) {
    cin >> a >> b;
    cout << a + b << "\n";
  }

  return 0;
}