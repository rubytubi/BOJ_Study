#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int n, m, sum;
int budget;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> budget;
    arr.push_back(budget);
  }

  cin >> m;

  sort(arr.begin(), arr.end());

  int low = 0, high = arr.back();

  while (low <= high) {
    sum = 0;
    int mid = (low + high) / 2;

    for (int i = 0; i < n; i++) {
      sum += min(arr[i], mid);
    }

    if (m >= sum)
      low = mid + 1;
    else
      high = mid - 1;
  }

  cout << low - 1 << "\n";

  return 0;
}