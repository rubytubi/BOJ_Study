#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> s(n * 2);

  for (int i = 0; i < n * 2; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end());

  int mini = 999999999;

  int start = 0, end = 2 * n - 1;
  int w = 0;

  while (start < end) {
    w = s[start] + s[end];
    mini = min(mini, w);
    start++;
    end--;
  }

  cout << mini << "\n";

  return 0;
}