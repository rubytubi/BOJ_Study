/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, s;
  cin >> n >> s;

  vector<int> seq(n);
  for (int i = 0; i < n; i++) {
    cin >> seq[i];
  }

  int start = 0, end = 0, sum = 0, count = 2147483647;

  while (end <= n) {
    if (sum >= s) {
      count = min(count, end - start);
      sum -= seq[start++];
    } else if (sum < s) {
      if (end == n)
        break;
      sum += seq[end++];
    }
  }

  if (count == 2147483647)
    cout << 0;

  else
    cout << count << "\n";

  return 0;
}
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, s;
  cin >> n >> s;

  vector<int> seq(n);

  for (int i = 0; i < n; i++) {
    cin >> seq[i];
  }

  int start = 0, end = 0, l_sum = seq[0], r_sum = seq[0];
  int l_count = 1, r_count = 1;

  while (start < n && end < n) {
    if (l_sum >= s && r_sum >= s) {
      break;
    } else if (l_sum < s && start != 0) {
      l_sum += seq[--start];
      l_count++;
    } else if (r_sum < s && end != n - 1) {
      r_sum += seq[++end];
      r_count++;
    } else {
      break;
    }
  }

  if (l_sum < s && r_sum < s) {
    cout << "0\n";
  } else {
    cout << min(l_count, r_count) << "\n";
  }

  return 0;
}
