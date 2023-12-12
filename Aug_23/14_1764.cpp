#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, count = 0;
  cin >> n >> m;
  string name;

  map<string, int> n_lis;

  vector<string> loser;

  for (int i = 0; i < n; i++) {
    cin >> name;
    n_lis[name] = i;
  }

  for (int i = 0; i < m; i++) {
    cin >> name;
    if (n_lis.find(name) != n_lis.end()) {
      count++;
      loser.push_back(name);
    }
  }

  sort(loser.begin(), loser.end());

  cout << count << "\n";

  for (vector<string>::iterator it = loser.begin(); it != loser.end(); it++) {
    cout << *it << "\n";
  }

  return 0;
}