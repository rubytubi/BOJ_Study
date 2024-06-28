#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  vector<int> honey(3);
  vector<int> v(3);

  for (int i = 0; i < 3; i++) {
    cin >> honey[i];
  }

  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }

  sort(honey.rbegin(), honey.rend());
  sort(v.rbegin(), v.rend());

  long long ret = 0;

  for (int i = 0; i < 3; i++) {
    ret += (long long)honey[i] * v[i];
  }

  cout << ret << "\n";

  return 0;
}
