#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int game[n];

  for (int i = 1; i <= n; i++) {
    cin >> game[i];
  }

  int count = 0;

  for (int i = n; i >= 2; i--) {
    if (game[i] <= game[i - 1]) {
      count += (game[i - 1] - game[i]) + 1;
      game[i - 1] = game[i] - 1;
    }
  }

  cout << count << "\n";

  return 0;
}