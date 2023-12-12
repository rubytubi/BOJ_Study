#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  vector<int> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      sum += p[j];
    }
  }

  cout << sum << '\n';

  return 0;
}