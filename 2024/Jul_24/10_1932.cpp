#include <iostream>
#include <algorithm>

using namespace std;

int dp[501][501];
int arr[501][501];

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = arr[1][1];
    dp[1][1] = arr[1][1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = max(dp[i - 1][j] + arr[i][j], dp[i - 1][j - 1] + arr[i][j]);
        }
    }

    sum = dp[n][1];

    for (int i = 1; i <= n; i++)
    {
        sum = max(sum, dp[n][i]);
    }

    cout << sum << "\n";

    return 0;
}