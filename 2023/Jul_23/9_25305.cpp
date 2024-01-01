#include <algorithm>
#include <iostream>

using namespace std;

int main() {

  int n, k;
  int num[1001];

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  sort(num, num + n);
  cout << num[n - k] << '\n';

  return 0;
}