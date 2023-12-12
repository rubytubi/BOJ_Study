#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  sort(d.begin(), d.end());

  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    sum += d[i];
  }

  cout << sum << "\n";

  return 0;
}