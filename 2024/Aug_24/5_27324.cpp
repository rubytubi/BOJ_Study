#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    a = n % 10;
    b = n / 10;

    if (a == b)
        cout << "1\n";

    else
        cout << "0\n";

    return 0;
}