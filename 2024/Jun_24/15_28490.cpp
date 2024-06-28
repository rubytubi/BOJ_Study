#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int h[1010];
int w[1010];
int sum;

vector<int> v;
int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> h[i] >> w[i];
    sum = h[i] * w[i];

    v.push_back(sum);
  }

  sort(v.rbegin(), v.rend());

  cout << v[0];

  return 0;
}