#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    cout << "All positions change in year " << x << "\n";

    for (int i = 1; x + i * 60 <= y; i++)
    {
        if (x + i * 60 <= y)
            cout << "All positions change in year " << x + i * 60 << "\n";
    }

    return 0;
}