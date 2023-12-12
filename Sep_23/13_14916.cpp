#include <iostream>

using namespace std;

int main() {
  int dp[100003] = {
      0,
  };
  int n;
  cin >> n;
  dp[4] = 2;
  dp[5] = 1;
  dp[6] = 3;
  dp[7] = 2;
  dp[8] = 4;

  if (n == 1 || n == 3)
    cout << "-1\n";
  else if (n == 2)
    cout << "1\n";
  else {

    if (n % 5 == 4)
      cout << n / 5 + dp[4] << '\n';
    else if (n % 5 == 0)
      cout << n / 5 << '\n';
    else if (n % 5 == 1)
      cout << (n / 5 - 1) + 3 << '\n';
    else if (n % 5 == 2)
      cout << n / 5 + 1 << '\n';
    else if (n % 5 == 3)
      cout << (n / 5 - 1) + dp[8] << '\n';
  }
  return 0;
}