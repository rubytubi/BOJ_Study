#include <iostream>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  long long N;
  cin >> N;
  cout << (N * (N - 1) * (N - 2)) / 6 << '\n' << 3;

  return 0;
}