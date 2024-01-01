#include <iostream>

using namespace std;

int main() {
  long long s, n = 0, count = 1;
  cin >> s;

  while (n <= s) {
    n += count;
    count++;
  }
  count = count - 1;
  if (n == s)
    cout << count << '\n';
  else
    cout << count - 1 << '\n';

  return 0;
}