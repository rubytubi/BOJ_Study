#include <iostream>

using namespace std;

int main() {
  double t, a, b;
  long long ans = 0;

  cin >> t;

  while (t--) {
    cin >> a >> b;
    double ret = a / b * a / b;
    ans = (long long)ret;

    if (ans < ret)
      ans++;

    cout << ans << "\n";
  }

  return 0;
}