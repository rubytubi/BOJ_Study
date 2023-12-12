#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first == b.first) {
    return a.second > b.second;
  }
  return a.first > b.first;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, d, w;
  cin >> n;
  int today = 0;
  vector<pair<int, int>> hw(n);

  for (int i = 0; i < n; i++) {
    cin >> d >> w;
    hw[i] = {d, w};
    if (d > today)
      today = d;
  }

  sort(hw.begin(), hw.end(), compare);

  int res;

  for (int i = 0; i < n; i++) {
    if (today >= hw[i].first) {
      res += hw[i].second;
      for (int j = 0; j < n; j++) {
        hw[j].first--;
      }
      today--;
    }
  }

  while(today--){
    
  }

  cout << res << "\n";

  /*for (int i = 0; i < hw.size(); i++) {
    cout << hw[i].first << " " << hw[i].second << "\n";
  }
  */

  return 0;
}