#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, int>> v;
vector<int> r;
int sum;

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}

int main()
{

    v.push_back(make_pair(0, 0));

    for (int i = 1; i <= 8; i++)
    {
        int t;
        cin >> t;

        v.push_back(make_pair(i, t));
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < 5; i++)
    {
        sum += v[i].second;
        r.push_back(v[i].first);
    }

    cout << sum << "\n";

    sort(r.begin(), r.end());

    for (int i = 0; i < 5; i++)
    {
        cout << r[i] << " ";
    }

    return 0;
}