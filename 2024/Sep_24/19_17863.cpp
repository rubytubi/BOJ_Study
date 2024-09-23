#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prefix = n / 10000;

    if (prefix == 555)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}
