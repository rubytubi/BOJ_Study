#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(int a, int b) { return a > b; }

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, money;
  cin >> n;

  vector<int> p(100010);

  for (int i = 1; i <= n; i++) {
    cin >> money;
    p.push_back(money);
  }

  sort(p.rbegin(), p.rend());

  long long sum = 0;

  for (int i = 0; i < p.size(); i++) {
    if (p[i] - i < 0)
      sum += 0;
    else
      sum += p[i] - i;
  }

  cout << sum << "\n";

  return 0;
}