#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int num;
  cin >> num;

  for (int i = 0; i < num; i++) {
    int t;
    cin >> t;

    if (t <= 1000)
      cout << t << " " << t * n;

    else {
      int sum = 0;
      cout << t << " ";
      sum += 1000 * n;

      t -= 1000;
      sum += t * m;
      cout << sum;
    }
    cout << endl;
  }

  return 0;
}