#include <iostream>

using namespace std;

int arr[1001];
int cnt, ans;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    int p = -1;

    while (true)
    {
        for (int i = 2; i <= n; i++)
        {
            if (arr[i] == i)
            {
                p = arr[i];
                break;
            }
        }

        for (int i = p; i <= n; i += p)
        {
            if (arr[i] == 0)
            {
                continue;
            }
            else
            {
                arr[i] = 0;
                cnt++;
            }
            if (cnt == k)
            {
                ans = i;
                cout << ans << "\n";
                return 0;
            }
        }
        p = -1;
    }

    return 0;
}