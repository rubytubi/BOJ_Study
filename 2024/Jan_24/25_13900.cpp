#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  vector<long long> num(n + 1, 0);
  vector<long long> sum(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    cin >> num[i];
    sum[i] = sum[i - 1] + num[i];
  }

  // int start = 1, end = 2;
  long long count = 0;

  // while (start < n) {
  //   if (end > n) {
  //     start++;
  //     end = start + 1;
  //   }

  //   count += num[start] * num[end];
  //   end++;
  // }
  for (int i = 1; i < n; i++) {
    count += num[i] * (sum[n] - sum[i]);
  }

  cout << count << "\n";

  return 0;
}