#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int x, y;
  cin >> x >> y;

  set<int> a, b;
  vector<int> v;

  for (int i = 0; i < x; i++) {
    int t;
    cin >> t;
    a.insert(t);
  }

  for (int i = 0; i < y; i++) {
    int t;
    cin >> t;
    b.insert(t);
  }

  for (auto &iter : a) {
    if (b.find(iter) == b.end()) { // 속하지 않는다면
      v.push_back(iter);
    }
  }

  int cnt = v.size();

  if (cnt == 0) {
    cout << "0\n";
  } else {
    cout << cnt << "\n";
    sort(v.begin(), v.end()); // 증가하는 순서로 출력하기 위해 정렬
    for (int i = 0; i < v.size(); i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
