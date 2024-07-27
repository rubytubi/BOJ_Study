#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int cnt = 1;
int max;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);
    }

    int max = v[v.size() - 1];

    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] > max)
        {
            cnt++;
            max = v[i];
        }
    }

    cout << cnt << "\n";

    return 0;
}