#include <iostream>

using namespace std;

int n, p, cnt;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        p += t;
        cnt++;
    }

    cout << p - (cnt - 1) << "\n";

    return 0;
}