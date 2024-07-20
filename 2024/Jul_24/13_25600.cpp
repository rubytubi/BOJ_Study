#include <iostream>
#include <algorithm>

using namespace std;

int arr[1010];

int main()
{
    int n, a, d, g;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> d >> g;

        arr[i] = a * (d + g);

        if (a == d + g)
            arr[i] *= 2;
    }

    int m = -100000000;

    for (int i = 0; i < n; i++)
    {
        m = max(m, arr[i]);
    }

    cout << m << "\n";

    return 0;
}