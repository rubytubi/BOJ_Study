#include <iostream>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    n %= 8;
    if (n == 1)
        ans = 1;
    else if (n == 0 || n == 2)
        ans = 2;
    else if (n == 3 || n == 7)
        ans = 3;
    else if (n == 4 || n == 6)
        ans = 4;
    else if (n == 5)
        ans = 5;

    cout << ans << "\n";

    return 0;
}