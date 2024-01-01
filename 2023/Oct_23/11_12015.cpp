// 수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN
// (o) -> 바이토닉 수열
#include <iostream>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, count = 0;
  cin >> n;

  int sequence[1000100];
  int list[1000100];
  for (int i = 0; i < n; i++) {
    cin >> sequence[i];
  }

  int index = 0;
  list[0] = sequence[0];
  for (int i = 1; i < n; i++) {
    if (sequence[i] > list[index]) {
      index++;
      list[index] = sequence[i];
    }

    else {
      int pos = lower_bound(list, list + index, sequence[i]) - list;
      list[pos] = sequence[i];
    }
  }

  cout << index + 1 << "\n";

  return 0;
}