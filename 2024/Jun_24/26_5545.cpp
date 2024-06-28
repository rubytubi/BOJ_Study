#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> d;

int main() {
  double n, a, b;
  cin >> n >> a >> b;

  double c;
  cin >> c;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    d.push_back(t);
  }

  sort(d.rbegin(), d.rend());

  double cal = c;
  double p = a;

  for (int i = 0; i < d.size(); i++) {
    if ((cal / p) < ((cal + d[i]) / (p + b))) {
      cal += d[i];
      p += b;
    }
  }

  cout << (int)(cal / p) << "\n";

  return 0;
}