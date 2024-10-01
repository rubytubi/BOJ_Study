#include <iostream>
#include <algorithm>

using namespace std;

int arr[100'110];
int sum, ret = -999999999;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i < k)
        {
            sum += arr[i];
        }
    }

    ret = max(ret, sum);

    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];
       