#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  while (m--) {
    int t;
    cin >> t;

    int start = 0, end = v.size() - 1;
    while (start < end) {
      int mid = (start + end) / 2;

      if (v[mid] < t) {
        start = mid + 1;
      }

      else if (v[mid] == t) {
        cout << mid << "\n";
        break;
      }

      else if (v[mid] > t) {
        end = mid - 1;
      }

      else {
        cout << "-1\n";
      }
    }
  }

  return 0;
}