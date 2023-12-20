#include <iostream>

using namespace std;

int arr[100010];
int sum_arr[100010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    sum_arr[i] += sum_arr[i - 1] + arr[i];
  }

  /*
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        sum_arr[i] += arr[j];
      }
    }
  */

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    cout << sum_arr[b] - sum_arr[a - 1] << "\n";
  }

  return 0;
}