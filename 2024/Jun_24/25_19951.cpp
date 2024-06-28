#include <iostream>
#include <vector>

using namespace std;

int h[100'010];
int order[100'010];
int psum[100'010];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    cin >> h[i];
  }

  while (m--) {
    int a, b, k;
    cin >> a >> b >> k;

    order[a] += k;
    order[b + 1] -= k;
  }

  for (int i = 1; i <= n; i++) {
    psum[i] = psum[i - 1] + order[i];
  }

  for (int i = 1; i <= n; i++) {
    h[i] += psum[i];
    cout << h[i] << " ";
  }

  return 0;
}