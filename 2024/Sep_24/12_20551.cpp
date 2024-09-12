#include <iostream>
#include <algorithm>

using namespace std;

bool flag = false;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    // scanf("%d %d", &n, &m);
    cin >> n >> m;

    int arr[n + 1];
    arr[0] = -1'000'000'001;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n + 1); // sort arr

    for (int i = 0; i < m; i++)
    {
        int d;
        // scanf("%d", &d);
        cin >> d;

        int start = 1, end = n;

        while (start <= end)
        {
            flag = false;
            int mid = (start + end) / 2;

            if (arr[mid] == d && arr[mid - 1] != d)
            {
                cout << mid - 1 << "\n";
                flag = true;
                break;
            }

            if (arr[mid] >= d)
                end = mid - 1;

            else if (arr[mid] < d)
                start = mid + 1;
        }
        if (flag == false)
            cout << "-1\n";
    }

    return 0;
}