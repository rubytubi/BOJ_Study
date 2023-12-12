#include <algorithm>
#include <iostream>
#include <utility>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.second == b.second)
    return a.first < b.first;
  return a.second < b.second;
}

int main() {
  int n, count = 1, end;
  cin >> n;

  pair<int, int> meeting[n];

  for (int i = 0; i < n; i++) {
    cin >> meeting[i].first >> meeting[i].second;
  }

  sort(meeting, meeting + n, compare);

  end = meeting[0].second;

  for (int i = 1; i < n; i++) {
    if (meeting[i].first >= end) {
      count++;
      end = meeting[i].second;
    }
  }

  cout << count << '\n';

  return 0;
}
