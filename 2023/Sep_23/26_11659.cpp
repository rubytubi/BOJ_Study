#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, start, end, sum = 0;

  cin >> n >> m;

  int num[100100] = {0};
  int pre_sum[100100] = {0};

  for (int i = 1; i <= n; i++) {
    cin >> num[i];
    pre_sum[i] = pre_sum[i - 1] + num[i];
  }
  for (int i = 0; i < m; i++) {
    int large = -2147483638;
    cin >> start >> end;
    large = max(large, pre_sum[end] - pre_sum[start - 1]);
    cout << large << "\n";
  }

  return 0;
}