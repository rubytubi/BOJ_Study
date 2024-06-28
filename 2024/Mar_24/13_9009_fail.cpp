#include <iostream>

using namespace std;

int arr[10000];
int ans[10000];

int fibo(int n) {
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }

  return arr[n];
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    while (n > 0) {
      if (n >= fibo(n)) {

        n -= fibo(n);
        if (n == 0)
          break;
      }

      else
        continue;
    }
    cout << "\n";
  }

  return 0;
}