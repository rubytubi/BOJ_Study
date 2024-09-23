#include <iostream>
#include <algorithm>

using namespace std;

int arr[3] = {-1, -1, -1};

int main()
{
    while (true)
    {
        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;

        sort(arr, arr + 3);

        if (arr[2] >= arr[0] + arr[1])
            cout << "Invalid\n";
        else
        {
            if (arr[0] == arr[1] && arr[1] == arr[2])
                cout << "Equilateral\n";

            else if (arr[0] == arr[1] || arr[1] == arr[2])
                cout << "Isosceles\n";

            else
                cout << "Scalene\n";
        }
    }
    return 0;
}