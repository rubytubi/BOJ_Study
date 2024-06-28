#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<long long> num(3);

  for (int i = 0; i < 3; i++) {
    cin >> num[i];
  }

  sort(num.begin(), num.end());

  cout << num[1] << "\n";

  return 0;
}