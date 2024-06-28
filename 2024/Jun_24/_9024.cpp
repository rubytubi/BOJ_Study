#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    long minimum = -2147483648;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      int t;
      cin >> t;

      v.push_back(t);
    }

    sort(v.begin(), v.end());

    int start = 0, end = v.size() - 1;
    long d = minimum;

    while (start < end) {
      int mid = v[start] + v[end];
      d = k - mid;

      minimum = min(abs(k - minimum), abs(d));
      // K를 이용해서 다시 코드 작성해봐라.

      if (minimum > k) {
        start++;
        cnt = 0;
      }

      else if (minimum < k) {
        end--;
        cnt = 0;
      }

      else if (minimum == k) {
        cnt++;
        start++;
        end--;
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}