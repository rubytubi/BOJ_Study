#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        priority_queue<long long, vector<long long>, greater<long long>> q;

        for (int i = 0; i < k; i++)
        {
            int t;
            cin >> t;

            q.push(t);
        }

        long long sum = 0;

        while (q.size() > 1)
        {
            long long a = q.top();
            q.pop();
            long long b = q.top();
            q.pop();

            sum += (a + b);

            q.push((a + b));
        }

        cout << sum << "\n";
    }

    return 0;
}