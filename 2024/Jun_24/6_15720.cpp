#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> x(1010);
vector<int> y(1010);
vector<int> z(1010);

int sum;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int b, c, d;
  cin >> b >> c >> d;

  for (int i = 0; i < b; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < c; i++) {
    cin >> y[i];
  }

  for (int i = 0; i < d; i++) {
    cin >> z[i];
  }

  sort(x.rbegin(), x.rend());
  sort(y.rbegin(), y.rend());
  sort(z.rbegin(), z.rend());

  for (int i = 0; i < 1010; i++) {
    sum += x[i];
  }

  for (int i = 0; i < 1010; i++) {
    sum += y[i];
  }

  for (int i = 0; i < 1010; i++) {
    sum += z[i];
  }

  cout << sum << "\n";

  int minimum = min(min(b, c), d);

  sum = 0;

  for (int i = 0; i < minimum; i++) {
    sum += ((x[i] + y[i] + z[i]) / 10) * 9;
    x[i] = 0;
    y[i] = 0;
    z[i] = 0;
  }

  sort(x.rbegin(), x.rend());
  sort(y.rbegin(), y.rend());
  sort(z.rbegin(), z.rend());

  for (int i = 0; i < 1010; i++) {
    sum += x[i] + y[i] + z[i];
  }

  cout << sum << "\n";

  return 0;
}