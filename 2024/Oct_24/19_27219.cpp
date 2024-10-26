#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int l = n % 5;
    int v = n / 5;

    for (int i = 0; i < v; i++)
    {
        cout << "V";
    }
    for (int i = 0; i < l; i++)
    {
        cout << "I";
    }

    cout << "\n";

    return 0;
}