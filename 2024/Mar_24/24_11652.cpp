#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  map<long long, int> m;
  long long num;

  for (int i = 0; i < n; i++) {
    cin >> num;
    m[num]++;
  }

  long long ret = -9223372036854775807;
  int cnt = 0;

  for (auto &pair : m) {
    if (pair.second > cnt) {
      cnt = pair.second;
      ret = pair.first;
    }
  }

  cout << ret << "\n";

  return 0;
}