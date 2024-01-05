#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int sum = 0;

  vector<int> arr1(4);
  vector<int> arr2(2);

  for (int i = 0; i < 4; i++) {
    cin >> arr1[i];
  }

  for (int i = 0; i < 2; i++) {
    cin >> arr2[i];
  }

  sort(arr1.begin(), arr1.end());
  sort(arr2.begin(), arr2.end());

  for (int i = 1; i < 4; i++) {
    sum += arr1[i];
  }

  sum += max(arr2[0], arr2[1]);

  cout << sum << "\n";

  return 0;
}