#include <iostream>

using namespace std;

int sum;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        sum += i;
    }

    if (sum > n)
    {
        cout << "-1\n";
        return 0;
    }

    int arr[k];

    for (int i = 0; i < k; i++)
    {
        arr[i] = i + 1;
        n -= (i + 1);
    }

    int i = k - 1;
    while (n--)
    {
        arr[i]++;
        i--;

        if (i < 0)
            i = k - 1;
    }

    cout << arr[k - 1] - arr[0] << "\n";

    return 0;
}