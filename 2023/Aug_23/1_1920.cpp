#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int m, n, number;
  cin >> n;

  set<int> num;

  for (int i = 0; i < n; i++) {
    cin >> number;
    num.insert(number);
  }

  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> number;
    auto it = num.find(number);

    if (it != num.end())
      cout << "1\n";

    else
      cout << "0\n";
  }

  return 0;
}

/*

int main() {
  int m, n, number;
  cin >> n;
  vector<int> num(n);

  for (int i = 0; i < n; i++) {
    cin >> number;
    num.push_back(number);
  }

  sort(num.begin(), num.end());

  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> number;
    bool isFind = binary_search(num.begin(), num.end(), number);
    if (isFind == true)
      cout << "1\n";
    else
      cout << "0\n";
  }

  return 0;
}
*/