#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, a, d, x = 0;
  cin >> n >> a >> d;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] == a + (d * x))
      x++;
  }

  cout << x << "\n";

  return 0;
}