#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool alcohol(pair<string, int> a, pair<string, int> b) {
  return a.second > b.second;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;

    vector<pair<string, int>> p;
    string name;
    int num;

    for (int j = 0; j < n; j++) {
      cin >> name >> num;
      p.push_back({name, num});
    }

    sort(p.begin(), p.end(), alcohol);

    cout << p[0].first << "\n";
  }

  return 0;
}