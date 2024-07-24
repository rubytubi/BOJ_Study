#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ans = 2147483000;
vector<int> v;

int main()
{
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);
    }

    for (int i = 0; i < n - 1; i++)
    {
        ans = min(ans, x * (v[i] + v[i + 1]));
    }

    cout << ans << "\n";

    return 0;
}