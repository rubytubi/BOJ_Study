#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
        cout << x + y << "\n";

    else
        cout << y - x << "\n";

    return 0;
}