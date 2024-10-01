#include <iostream>
#include <algorithm>

using namespace std;

int n, k, b; // k: 연속된 신호등 목표, b: 고장난 신호등
int arr[100'110];
int sum;

int main()
{
    cin >> n >> k >> b;

    for (int i = 0; i < b; i++)
    {
        int t;
        cin >> t;

        arr[t] = 1;
    }

    for (int i = 1; i <= k; i++)
    {
        sum += arr[i];
    }

    int ans = sum;

    for (int i = k + 1; i <= n; i++)
    {
        sum = sum - arr[i - k] + arr[i];
        ans = min(ans, sum);
    }

    cout << ans << "\n";

    return 0;
}