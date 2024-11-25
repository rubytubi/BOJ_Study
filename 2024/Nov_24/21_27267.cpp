#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int area_m = a * b;
    int area_p = c * d;

    if (area_m > area_p)
        cout << "M\n";
    else if (area_m < area_p)
        cout << "P\n";
    else
        cout << "E\n";

    return 0;
}
