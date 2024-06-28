#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;

    v.push_back(c);
  }

  sort(v.rbegin(), v.rend());

  int sum = 0;

  for (int i = 0; i < v.size(); i++) {
    if ((i + 1) % 3 == 0)
      continue;

    sum += v[i];
  }

  cout << sum << "\n";

  return 0;
}