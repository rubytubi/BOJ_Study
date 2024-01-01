#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
int binary_search(int low, int high, int target) {
  double middle = (low + high) / 2;
  int mid = ceil(middle);
  while (low <= high) {

    if (b[mid] >= target)
      return binary_search(low, mid - 1, target);

    else if(b[mid] < target){
        return mid;
    }
  }
  return count;
}
*/

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int count = 0;
    while (i < n && j < m) {
      if (a[i] > b[j]) {
        count += (n - i);
        j++;
      }

      else
        i++;
    }
    cout << count << "\n";
  }

  return 0;
}