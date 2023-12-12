#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int a, int b) { return a < b; }

int main() {
  int n;
  cin >> n;

  int num[n];

  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }

  sort(num, num + n);
  sort(num, num + n, compare);

  for (int i = 0; i < n; i++)
    cout << num[i] << "\n";

  return 0;
}