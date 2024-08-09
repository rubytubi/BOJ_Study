#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int t;
    cin >> t;

    vector<int> h, v;
    h.push_back(0);
    h.push_back(m);
    v.push_back(0);
    v.push_back(n);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0)
            h.push_back(b); // 가로로 자르는 경우 = 세로
        else
            v.push_back(b); // 세로로 자르는 경우 = 가로
    }

    sort(h.begin(), h.end());
    sort(v.begin(), v.end());

    int maxh = 0;
    for (int i = 1; i < h.size(); i++)
    {
        maxh = max(maxh, h[i] - h[i - 1]);
    }

    int maxw = 0;
    for (int i = 1; i < v.size(); i++)
    {
        maxw = max(maxw, v[i] - v[i - 1]);
    }

    cout << maxw * maxh << "\n";

    return 0;
}
