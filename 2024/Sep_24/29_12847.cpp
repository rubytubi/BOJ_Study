#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
long long sum;
long long ret = -1;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int p_sum[n];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);

        if (i < m)
            sum += t;

        else
        {
            sum -= v[j];
            sum += t;
            j++;
        }

        ret = max(ret, sum);
    }

    cout << ret << "\n";

    return 0;
}