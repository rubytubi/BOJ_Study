#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, t, invite = 0;
  vector<int> time;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    time.push_back(t);
  }

  sort(time.begin(), time.end());
  reverse(time.begin(), time.end()); // 내림차순으로 변경

  for (int i = 0; i < n; i++) {
    if (time[i] + i > invite) // 현재 나무가 자라는데 걸리는 시간 + 이전
                              // 나무들이 자라는데 걸린 일수 > 초대 일수
      invite = time[i] + i;
  }

  cout << invite + 2 << '\n';

  return 0;
}