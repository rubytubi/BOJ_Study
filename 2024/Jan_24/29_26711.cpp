#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int sum = 0;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    sum += temp;
  }

  cout << sum << "\n";

  return 0;
}
