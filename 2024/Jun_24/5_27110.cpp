#include <iostream>

using namespace std;
int cnt;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < 3; i++) {
    int x;
    cin >> x;

    if (x > n)
      cnt += n;

    else
      cnt += x;
  }

  cout << cnt << "\n";
  return 0;
}