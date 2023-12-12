#include <iostream>
using namespace std;

long long n;
long long sum = 1;

int main() {
  cin >> n;
  for (long long i = 2; i <= n; i++)
    sum *= i;

  cout << sum << "\n";
}