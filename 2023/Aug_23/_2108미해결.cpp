#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int num[500001];
int n;

int arithmetic_mean() {
  double a = 0;
  for (int i = 0; i < n; i++) {
    a += num[i];
  }
  return round(a / n);
}

int medain() { return num[(n - 1) / 2]; }

int mode() { return (num[n - 1] - num[0]); }

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> num[i];
  }
  sort(num, num + n);

  return 0;
}