#include <iostream>
#include <set>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, m;

  set<int> s; // 상근이가 갖고있는 카드집합
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> m;
    s.insert(m); // 집합에 카드를 삽입
  }
  int k, l;
  cin >> k;

  for (int i = 0; i < k; i++) {
    cin >> l;
    cout << s.count(l) << ' '; // count로 카드 유무 확인
  }
  cout << "\n";

  return 0;
}