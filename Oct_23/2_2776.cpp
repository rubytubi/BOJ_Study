#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool binary_search(vector<int> &num, int target) {
  int low = 0;
  int high = num.size() - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (num[mid] == target)
      return true;

    else if (num[mid] < target)
      low = mid + 1;

    else
      high = mid - 1;
  }
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n;
    vector<int> n_num(n);

    for (int i = 0; i < n; i++) {
      cin >> n_num[i];
    }

    sort(n_num.begin(), n_num.end());

    cin >> m;
    vector<int> m_num(m);

    for (int i = 0; i < m; i++) {
      cin >> m_num[i];
      cout << binary_search(n_num, m_num[i]) << "\n";
    }
  }

  return 0;
}