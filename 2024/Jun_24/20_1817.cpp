#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int weight = 0, cnt = 0;

  for (int i = 0; i < n; i++) {
    int book;
    cin >> book;

    if (weight + book > m) {
      cnt++;
      weight = book;
    } else
      weight += book;
  }
  if (weight)
    cout << cnt + 1 << "\n";
  else
    cout << cnt << "\n";

  return 0;
}