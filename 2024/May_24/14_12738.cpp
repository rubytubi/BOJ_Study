#include <algorithm>
#include <iostream>

using namespace std;

int arr[1'000'010];
int list[1'000'010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int a;
  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }

  int index = 0;
  list[0] = arr[0];

  for (int i = 0; i < a; i++) {
    if (arr[i] > list[index]) {
      index++;
      list[index] = arr[i];
    }

    else {
      int pos = lower_bound(list, list + index, arr[i]) - list;
      list[pos] = arr[i];
    }
  }

  cout << index + 1 << "\n";

  return 0;
}
