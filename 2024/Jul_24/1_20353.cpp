#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  long long a;
  cin >> a;

  long double ret = sqrt(a) * 4;

  cout << fixed << setprecision(8) << ret << "\n";

  return 0;
}