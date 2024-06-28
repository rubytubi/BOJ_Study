#include <iostream>
#include <vector>

using namespace std;

int fibo(int n) {
  if (n <= 1)
    return 1;

  vector<int> f(n + 1);
  f[0] = 1;
  f[1] = 1;

  for (int i = 2; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }

  return f[n];
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int x;
    cin >> x;

    int ret = fibo(x);
    cout << ret << "\n";
  }

  return 0;
}