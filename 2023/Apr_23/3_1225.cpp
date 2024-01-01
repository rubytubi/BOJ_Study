#include <iostream>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  long long q = 0, w = 0, i;

  for (i = 0; i < a.size(); i++) {
    q += a[i] - '0';
  }

  for (i = 0; i < b.size(); i++) {
    w += b[i] - '0';
  }

  cout << q * w << endl;

  return 0;
}