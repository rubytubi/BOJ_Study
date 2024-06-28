#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int cnt;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  if (n < 2) {
    cout << "0\n";
    return 0;
  }

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;

    v.push_back(t);
  }

  sort(v.begin(), v.end());

  int start = 0, end = v.size() - 1;

  while (start < end) {
    if (v[start] + v[end] < m) {
      start++;
    } else if (v[start] + v[end] >= m) {
      cnt++;
      start++;
      end--;
    }
  }

  cout << cnt << "\n";

  return 0;
}