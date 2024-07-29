#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> cards(m);
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        cards[i] = {a, b};
    }

    int required_prizes = m - 1;

    vector<int> costs;
    for (const auto &card : cards)
    {
        int a = card.first;
        int b = card.second;
        if (a >= n)
        {

            required_prizes--;
        }
        else
        {

            costs.push_back(n - a);
        }
    }

    if (required_prizes <= 0)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(costs.begin(), costs.end());

    int min_cost = 0;
    for (int i = 0; i < required_prizes; ++i)
    {
        min_cost += costs[i];
    }

    cout << min_cost << endl;

    return 0;
}
