#include <iostream>
#include <cmath>

using namespace std;

int sum;
int arr[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (abs(100 - (sum + arr[i])) <= abs(100 - sum))
            sum += arr[i];

        else
            break;
    }

    cout << sum << "\n";

    return 0;
}