#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int n, k;
int sum = 0;
vector<int> v;

bool parametric_search(int x) {
  int score = 0, count = 0;

  for (int i = 0; i < n; i++) {
    score += v[i];
    if (score >= x) {
      count++;
      score = 0;
    }
  }

  if (count >= k)
    return true;

  else
    return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);

    sum += t;
  }

  int ret = 0;
  int left = 0, right = sum;

  while (left <= right) {
    int mid = (left + right) / 2;

    if (parametric_search(mid)) {
      ret = max(ret, mid);
      left = mid + 1;
    }

    else
      right = mid - 1;
  }

  cout << ret << "\n";

  return 0;
}
