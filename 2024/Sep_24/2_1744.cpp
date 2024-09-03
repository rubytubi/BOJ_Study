#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> pos;
vector<int> neg;
int cnt;
int sum;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t > 0)
            pos.push_back(t);

        else if (t < 0)
            neg.push_back(t);

        else
            cnt++;
    }

    sort(pos.rbegin(), pos.rend());
    sort(neg.begin(), neg.end());

    for (int i = 0; i < neg.size(); i++)
    {
        if (neg.size() - i > 1)
        {
            sum += (neg[i] * neg[i + 1]);
            i++;
        }

        else
        {
            if (cnt <= 0)
                sum += neg[i];
            else
                break;
        }
    }

    for (int i = 0; i < pos.size(); i++)
    {
        if (pos.size() - i > 1)
        {
            sum += max((pos[i] * pos[i + 1]), (pos[i] + pos[i + 1]));
            i++;
        }

        else
            sum += pos[i];
    }

    cout << sum << "\n";

    return 0;
}