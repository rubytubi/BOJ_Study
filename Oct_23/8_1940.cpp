#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> armor;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, a, count = 0, b;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> a;
    armor.push_back(a);
  }

  sort(armor.begin(), armor.end());

  int start = 0, end = n - 1;

  while (start < end) {
    if (armor[start] + armor[end] == m) {
      count++;
      start++;
    }

    else if (armor[start] + armor[end] > m)
      end--;

    else
      start++;
  }

  cout << count << "\n";

  return 0;
}
