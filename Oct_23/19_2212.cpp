#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  if (k >= n) {
    cout << "0\n";
    return 0;
  }

  vector<int> con(n);
  vector<int> distance(n - 1);

  for (int i = 0; i < n; i++) {
    cin >> con[i];
  }

  sort(con.begin(), con.end());

  for (int i = 0; i < n - 1; i++) {
    distance[i] = con[i + 1] - con[i];
  }
  sort(distance.begin(), distance.end());
  reverse(distance.begin(), distance.end());

  if (k < n) {
    for (int i = 0; i < k - 1; i++) {
      distance[i] = 0;
    }
  }
  int sum = 0;

  for (int i = 0; i < n - 1; i++) {
    sum += distance[i];
  }

  cout << sum << "\n";
  return 0;
}