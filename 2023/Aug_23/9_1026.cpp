#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, sum = 0;
  cin >> n;

  vector<int> A(n);
  vector<int> B(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> B[i];
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  reverse(B.begin(), B.end());

  for (int i = 0; i < n; i++) {
    sum += A[i] * B[i];
  }

  cout << sum << '\n';

  return 0;
}