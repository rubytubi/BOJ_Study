#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int x;
vector<int> v;
int sum;

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

    x = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (sum + v[i] < 0)
        {
            x = max(x, v[i]);
            sum = 0;
        }

        else
        {
            sum += v[i];
            x = max(x, sum);
        }
    }
    cout << x << "\n";

    return 0;
}