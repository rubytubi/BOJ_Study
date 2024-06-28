#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> num(n);
  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  sort(num.begin(), num.end());

  int x;
  cin >> x;

  int count = 0;

  int start = 0, end = n - 1;

  while (start < end) {
    if (num[start] + num[end] > x)
      end--;

    else if (num[start] + num[end] < x)
      start++;

    else {
      count++;
      start++;
      end--;
    }
  }

  cout << count << "\n";

  return 0;
}