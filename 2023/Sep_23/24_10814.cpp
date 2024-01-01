#include <iostream>
#include <vector>
using namespace std;

int n, x;
vector<int> v;

int main() {
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> x;
    v.insert(v.begin() + x, i);
  }

  for (int i = n - 1; i >= 0; i--) {
    cout << v[i] << " ";
  }
  cout << "\n";

  return 0;
}