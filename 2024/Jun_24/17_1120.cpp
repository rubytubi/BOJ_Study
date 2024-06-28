#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {

  string a, b;
  cin >> a >> b;

  int ret = 10000;

  for (int i = 0; i <= b.size() - a.size(); i++) {
    int cnt = 0;
    for (int j = 0; j < a.size(); j++) {
      if (a[j] != b[j + i])
        cnt++;
    }

    ret = min(ret, cnt);
  }

  cout << ret << "\n";

  return 0;
}