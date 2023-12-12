#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> l(3);

  for (int i = 0; i < 3; i++) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());

  if (l[0] + l[1] <= l[2]) {
    l[2] = l[0] + l[1] - 1;
  }

  cout << l[0] + l[1] + l[2] << endl;

  return 0;
}