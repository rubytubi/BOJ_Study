#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> coin;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    vector<int> dp(k + 1);

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        coin.push_back(t);
    }

    sort(coin.begin(), coin.end());

    dp[0] = 1;

    for (int i = 0; i < coin.size(); i++)
    {
        for (int j = coin[i]; j <= k; j++)
        {
            dp[j] += dp[j - coin[i]];
        }
    }

    cout << dp[k] << "\n";

    return 0;
}