#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
  return a.first < b.first;
}

int main() {
  int n;
  cin >> n;

  pair<int, string> m;
  vector<pair<int, string>> member;

  for (int i = 0; i < n; i++) {
    cin >> m.first >> m.second;
    member.push_back(m);
  }

  stable_sort(member.begin(), member.end(), compare);

  for (int i = 0; i < member.size(); i++) {
    cout << member.at(i).first << " " << member.at(i).second << '\n';
  }

  return 0;
}