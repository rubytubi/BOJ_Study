#include <iostream>

using namespace std;

int arr[11];
int seq[11];
int cnt;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> seq[i];
    }

    arr[seq[1] + 1] = 1;

    for (int i = 2; i < n; i++)
    {
        cnt = 0;
        if (seq[i] != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[j] == 0)
                    cnt++;
                if (cnt == seq[i] + 1)
                {
                    arr[j] = i;
                    break;
                }
            }
        }

        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[j] == 0)
                {
                    arr[j] = i;
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
            arr[i] = n;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}