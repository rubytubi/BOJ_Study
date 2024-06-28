#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;
int arr[1010];

bool cmp(pair<int, int> &a, pair<int, int> &b) {
  if (a.second == b.second)
    return a.first < b.first;

  else
    return a.second > b.second;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int d, w;
    cin >> d >> w;

    v.push_back(make_pair(d, w));
  }

  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < v.size(); i++) {
    for (int j = v[i].first; j > 0; j--) {
      if (arr[j] == 0) {
        arr[j] = v[i].second;
        break; // 점수 가장 d가 많이 남았을때로 기록하고 탈출 = 과제를
               // 미루고미루고미루다 해야지
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < 1001; i++) {
    if (arr[i] == 0)
      continue;

    sum += arr[i];
  }

  cout << sum << "\n";

  return 0;
}
