#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int a, b, c;

    cin >> x >> y >> z;

    cin >> a >> b >> c;

    int total = 0;
    if (a > x)
        total += a - x;
    if (b > y)
        total += b - y;
    if (c > z)
        total += c - z;

    cout << total << "\n";

    return 0;
}
