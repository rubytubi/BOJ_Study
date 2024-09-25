#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m == 1 || m == 2)
        cout << "NEWBIE!\n";

    else if (m > 2 && m <= n)
        cout << "OLDBIE!\n";

    else
        cout << "TLE!\n";

    return 0;
}