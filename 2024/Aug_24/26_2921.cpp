#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            sum += i + j;
        }
    }

    cout << sum << "\n";

    return 0;
}