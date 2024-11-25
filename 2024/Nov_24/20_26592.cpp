#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        double area, x;
        cin >> area >> x;

        double h = (2 * area) / x;

        cout << fixed << setprecision(2);
        cout << "The height of the triangle is " << h << " units\n";
    }

    return 0;
}
