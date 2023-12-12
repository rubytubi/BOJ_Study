#include <iostream>
using namespace std;

int main() {
  int n, max = 0, m_price = 0;
  int a[3];
  cin >> n;
  int price[n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[j];
      if (max < a[j])
        max = a[j];
    }

    if (a[0] == a[2] && a[0] == a[1]) {
      price[i] = 10000 + a[0] * 1000;
    }

    else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2]) {
      price[i] = max * 100;
    }

    else {
      if (a[0] == a[1])
        price[i] = 1000 + a[0] * 100;
      else
        price[i] = 1000 + a[2] * 100;
    }
  }
  for (int i = 0; i < n; i++) {
    if (m_price < price[i])
      m_price = price[i];
  }

  cout << m_price << endl;

  return 0;
}