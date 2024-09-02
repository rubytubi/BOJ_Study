#include <iostream>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;

        int tmp = n % 100;

        if ((n + 1) % tmp == 0)
            cout << "Good" << '\n';
        else
            cout << "Bye" << '\n';
    }

    return 0;
}