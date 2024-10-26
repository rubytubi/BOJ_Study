#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    double n = a - (a * (b / 100));

    if (n >= 100)
        cout << "0\n";

    else
        cout << "1\n";

    return 0;
}