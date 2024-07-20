#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    while (m--)
    {
        cin >> a >> b;
        if (a != b)
        {
            for (int i = 0; i <= (b - a) / 2; i++)
            {
                swap(arr[a + i], arr[b - i]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}