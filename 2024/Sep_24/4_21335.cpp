#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    long long a;
    cin >> a;

    double r = sqrt(a / M_PI);

    double ans = 2 * M_PI * r;

    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}
