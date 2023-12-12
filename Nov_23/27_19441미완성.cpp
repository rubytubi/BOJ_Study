#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int count = 0, flag = 0;

  vector<char> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] == 'H') {
      for (int j = 1; j <= k; j++) {
      }
    } else {
    }
  }

  return 0;
}