#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int start = 1, end = start + 1;

  int sum = 1, count = 0;

  while (end < n) {
    sum += end;

    if (sum < n) {
      end++;
    }

    else if (sum == n) {
      count++;
      start++;
      end = start + 1;
      sum = start;
    }

    else {
      start++;
      sum = start;
      end = start + 1;
    }
  }

  cout << count + 1 << "\n";

  return 0;
}