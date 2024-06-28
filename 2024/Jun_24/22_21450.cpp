#include <iostream>

using namespace std;

int main() {
  long long m, k;
  cin >> m >> k;

  if (m % k == 0)
    cout << "Yes\n";

  else
    cout << "No\n";

  return 0;
}