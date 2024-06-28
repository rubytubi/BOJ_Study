#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    vector<int> num;

    int m;
    while (cin >> m) {
      char c = cin.get();
      num.push_back(m);
      if (c == '\n') {
        break;
      }
    }

    int ret = 0;
    for (int j = 0; j < num.size(); j++) {
      for (int k = j + 1; k < num.size(); k++) {
        int tmp = gcd(num[j], num[k]);
        ret = max(ret, tmp);
      }
    }

    cout << ret << "\n";
  }

  return 0;
}
