#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int a = 100 - x;
    int b = 100 - y;
    int c = 100 - (a + b);
    int d = a * b;

    int q = d / 100;
    int r = d % 100;

    c += q;

    cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n";

    cout << c << " " << r << "\n";

    return 0;
}