#include <iostream>

using namespace std;

int sum;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;

        sum += 5 * n;
    }

    cout << sum << "\n";

    return 0;
}