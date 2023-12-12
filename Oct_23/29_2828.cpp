#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m, j;
  cin >> n >> m >> j;

  int pos[2] = {1, m}, apple, count = 0;

  for (int i = 0; i < j; i++) {
    cin >> apple;

    if (pos[0] <= apple && pos[1] >= apple)
      continue;

    else {
      // 바구니 왼쪽에서 사과 떨어질 경우
      if (pos[0] > apple) {
        count += pos[0] - apple;
        pos[1] = pos[1] - (pos[0] - apple);
        pos[0] = pos[0] - (pos[0] - apple);
      }
      // 바구니 오른쪽에서 사과가 떨어질 경우
      else if (pos[1] < apple) {
        count += apple - pos[1];
        pos[0] += apple - pos[1];
        pos[1] += apple - pos[1];
      }
    }
  }

  cout << count << "\n";

  return 0;
}