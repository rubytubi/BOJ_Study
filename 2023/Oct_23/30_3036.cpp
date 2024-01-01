#include <iostream>
#include <numeric>

using namespace std;

int ring[110];

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin >> n;
  // 몫, 나머지
  int a, b;
  int g;
  for (int i = 1; i <= n; i++) {
    cin >> ring[i];
  }

  for (int i = 2; i <= n; i++) {
    g = gcd(ring[1], ring[i]);
    a = ring[1] / g;
    b = ring[i] / g;
    cout << a << "/" << b << "\n";
  }

  return 0;
}
// 4 <- 링 개수
// 12 3 8 4  <- 링 반지름
// 첫번째 링둘: 24
// 나머지 링둘: 6 16 8