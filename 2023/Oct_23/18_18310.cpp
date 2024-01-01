#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> home(n);

  for (int i = 0; i < n; i++) {
    cin >> home[i];
  }

  sort(home.begin(), home.end());

  if (n % 2 == 0)
    cout << home[((n - 1) / 2)] << "\n";
  else
    cout << home[n / 2] << "\n";

  return 0;
}