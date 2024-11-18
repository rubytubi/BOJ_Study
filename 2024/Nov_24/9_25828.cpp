#include <iostream>

using namespace std;

int main()
{
    int g, p, t;
    cin >> g >> p >> t;
    if (g * p < g + t * p)
        cout << 1 << "\n";
    else if (g * p > g + t * p)
        cout << 2 << "\n";
    else
        cout << 0 << "\n";
}