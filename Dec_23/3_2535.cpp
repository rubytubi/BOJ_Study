#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

bool cmp(tuple<int, int, int> t1, tuple<int, int, int> t2) {
  return (get<2>(t1) > get<2>(t2));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  int country, student, score;

  vector<tuple<int, int, int>> t;

  for (int i = 0; i < n; i++) {
    cin >> country >> student >> score;
    t.push_back(make_tuple(country, student, score));
  }

  sort(t.begin(), t.end(), cmp);

  int count = 0;

  for (int i = 0; i < 2; i++) {
    cout << get<0>(t[i]) << " " << get<1>(t[i]) << "\n";
  }

  int flag = 0;

  if (get<0>(t[0]) == get<0>(t[1]))
    flag = 1;

  for (int i = 2; i < t.size(); i++) {
    if (flag == 0) {
      cout << get<0>(t[i]) << " " << get<1>(t[i]) << "\n";
      return 0;
    }

    else if (flag == 1) {
      if (get<0>(t[i]) != get<0>(t[1])) {
        cout << get<0>(t[i]) << " " << get<1>(t[i]) << "\n";
        return 0;
      }
    }
  }
}