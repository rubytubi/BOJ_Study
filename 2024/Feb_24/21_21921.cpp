#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> visit(n);
  int sum = 0, max = -1, count = 0;

  for (int i = 0; i < n; i++) {
    cin >> visit[i];
    if (i < x)
      sum += visit[i];

    else
      sum = sum - visit[i - x] + visit[i];

    if (max < sum) {
      max = sum;
      count = 1;
    }

    else if (max == sum)
      count++;
  }

  if (max == 0)
    cout << "SAD\n";
  else {
    cout << max << "\n";
    cout << count << "\n";
  }
  return 0;
}