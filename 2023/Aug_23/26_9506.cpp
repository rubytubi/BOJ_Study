#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int n, sum;

  while (n != -1) {
    cin >> n;
    if (n == -1)
      break;

    vector<int> measure;
    sum = 0;
    for (int i = 1; i < n; i++) {
      if (n % i == 0) {
        measure.push_back(i);
        sum += i;
      }
    }

    if (sum == n) {
      cout << n << " = ";
      for (int i = 0; i < measure.size() - 1; i++) {
        cout << measure[i] << " + ";
      }
      cout << measure[measure.size() - 1] << '\n';
    }

    else {
      cout << n << " is NOT perfect." << '\n';
    }
  }

  return 0;
}