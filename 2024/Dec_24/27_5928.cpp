#include <iostream>

using namespace std;

int main()
{
    int d, h, m;
    cin >> d >> h >> m;

    int p = 11 + 11 * 60 + 11 * 60 * 24;
    int ans = m + h * 60 + d * 60 * 24 - p;
    if (ans < 0)
        cout << -1 << '\n';
    else
        cout << ans << '\n';

    return 0;
}