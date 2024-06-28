#include <algorithm>
#include <iostream>

using namespace std;

int arr[5010];

int main() {
  int n, m;
  cin >> n >> m;

  int minVal = arr[0], maxVal = arr[0];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }

  int left = -1, right = 10000;

  return 0;
}