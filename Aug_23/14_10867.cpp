#include <iostream>
#include <set>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, num;
  cin >> n;

  set<int> number;

  for (int i = 0; i < n; i++) {
    cin >> num;
    number.insert(num);
  }

  for (set<int>::iterator it = number.begin(); it != number.end(); it++) {
    cout << *it << " ";
  }

  cout << '\n';

  return 0;
}