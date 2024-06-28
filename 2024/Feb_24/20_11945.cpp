#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<string> bread(n);

  for (int i = 0; i < n; i++) {
    cin >> bread[i];
  }

  for (int i = 0; i < n; i++) {
    reverse(bread[i].begin(), bread[i].end());
    cout << bread[i] << "\n";
  }

  return 0;
}