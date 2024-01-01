#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int n, sumCub = 0;
  cin >> n;

  int sum = n * (n + 1) / 2;
  int sumSq = sum * sum;

  for (int i = 1; i <= n; i++)
    sumCub += pow(i, 3);

  cout << sum << "\n" << sumSq << "\n" << sumCub << "\n";

  return 0;
}