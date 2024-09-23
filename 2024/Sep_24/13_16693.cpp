#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a1, p1, r1, p2;
    cin >> a1 >> p1 >> r1 >> p2;

    double wp = M_PI * r1 * r1;

    double slice = (double)(a1) / p1;
    double wp_val = wp / p2;

    if (wp_val > slice)
        cout << "Whole pizza\n";
    else
        cout << "Slice of pizza\n";

    return 0;
}