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

    cout << sum << "\n";

    return 0;
}