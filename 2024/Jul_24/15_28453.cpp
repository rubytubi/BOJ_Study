#include <iostream>

using namespace std;

int arr[100];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 300)
            cout << "1 ";

        else if (arr[i] < 300 && arr[i] >= 275)
            cout << "2 ";

        else if (arr[i] < 275 && arr[i] >= 250)
            cout << "3 ";

        else
            cout << "4 ";
    }

    return 0;
}