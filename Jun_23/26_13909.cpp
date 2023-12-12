#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cin >> n;

  int count = 0;

  for (int i = 1; i * i <= n; i++) {
    count++;
  }
  cout << count << '\n';

  return 0;
}