#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;

        for (int i = 0; i < t; i++)
        {
            cout << "=";
        }
        cout << endl;
    }

    return 0;
}