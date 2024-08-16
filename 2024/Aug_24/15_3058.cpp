#include <iostream>

using namespace std;

int n, sum, mini;
int arr[7];

int main()
{
    cin >> n;

    while (n--)
    {
        sum = 0;
        mini = 100000000;

        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                sum += arr[i];
                if (arr[i] < mini)
                    mini = arr[i];
            }
        }
        cout << sum << ' ' << mini << "\n";
    }

    return 0;
}