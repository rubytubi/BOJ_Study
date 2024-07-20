#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int sum;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < k; i++)
    {
        sum += (v[i] - i);
    }

    cout << sum << "\n";

    return 0;
}