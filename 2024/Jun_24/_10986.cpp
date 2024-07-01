#include <iostream>

using namespace std;

long long arr[1'000'010];
long long pSum[1'000'010];

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    pSum[i] += arr[i];
  }

  return 0;
}