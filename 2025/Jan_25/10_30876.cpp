#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    pair<int, int> south = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i].second < south.second)
        {
            south = v[i];
        }
    }

    cout << south.first << " " << south.second << endl;

    return 0;
}