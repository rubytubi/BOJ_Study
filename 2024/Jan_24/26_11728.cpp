#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);
  vector<int> v(n + m);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < m + n; i++) {
    if (i < n)
      v[i] = a[i];
    else
      v[i] = b[i - n];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < m + n; i++) {
    cout << v[i] << " ";
  }

  printf("\n");
  return 0;
}