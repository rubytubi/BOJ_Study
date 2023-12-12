#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;

    int count = 0, sum = 0;

    for (int j = n; j <= m; j++) {
      string str = to_string(j);
      for (int k = 0; k < str.length(); k++) {
        if (str[k] == '0')
          count++;
      }
    }
    cout << count << '\n';
  }

  return 0;
}
