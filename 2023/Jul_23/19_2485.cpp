#include <iostream>

using namespace std;

int GCD(int a, int b) {
  int x;
  while (b != 0) {
    x = a % b;
    a = b;
    b = x;
  }
  return a;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, gcd, count = 0;
  cin >> n;

  int tree[n];
  int distance[n - 1];

  for (int i = 0; i < n; i++) {
    cin >> tree[i];
    if (i > 0) {
      distance[i - 1] = tree[i] - tree[i - 1];
    }
  }
  gcd = distance[0];
  for (int i = 1; i < n - 1; i++) {
    gcd = GCD(gcd, distance[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    count = count + (distance[i] / gcd) - 1;
  }

  cout << count << '\n';

  return 0;
}