#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  if (100 * n >= m)
    cout << "Yes\n";

  else
    cout << "No\n";

  return 0;
}