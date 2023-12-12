#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, l, snake;
  cin >> n >> l;

  snake = l;

  vector<int> f(n);

  for (int i = 0; i < n; i++) {
    cin >> f[i];
  }

  sort(f.begin(), f.end());

  for (int i = 0; i < n; i++) {
    if (snake >= f[i]) {
      snake++;
    } else {
      cout << snake << "\n";
      return 0;
    }
  }

  cout << snake << "\n";

  return 0;
}