#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> v;

  int temp = 0;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);

    if (i < k) {
      temp += v[i];
    }
  }

  int t = temp;

  for (int i = k; i < n; i++) {
    temp += v[i] - v[i - k];
    t = max(temp, t);
  }

  cout << t << "\n";

  return 0;
}