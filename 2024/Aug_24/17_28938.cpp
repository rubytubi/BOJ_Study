#include <iostream>

using namespace std;

int sum;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        sum += t;
    }

    if (sum > 0)
        cout << "Right\n";
    else if (sum == 0)
        cout << "Stay\n";
    else
        cout << "Left\n";

    return 0;
}