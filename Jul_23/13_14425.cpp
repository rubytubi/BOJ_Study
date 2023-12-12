#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, count = 0;
  string str_n, str_m;
  cin >> n >> m;

  set<string> str;

  for (int i = 0; i < n; i++) {
    cin >> str_n;
    str.insert(str_n);
  }

  for (int i = 0; i < m; i++) {
    bool find_str = false;
    cin >> str_m;
    if (str.count(str_m) == 1)
      find_str = true;
    if (find_str == true)
      count++;
  }

  cout << count << "\n";

  return 0;
}