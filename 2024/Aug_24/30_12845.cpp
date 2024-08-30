#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
long long sum;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);
    }

    sort(v.rbegin(), v.rend());

    for (int i = 1; i < n; i++)
    {
        sum += (v[0] + v[i]);
    }

    cout << sum << "\n";

    return 0;
}