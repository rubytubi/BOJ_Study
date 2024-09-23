#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;
int cnt;

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

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        int start = 0, end = v.size() - 1;

        while (start < end)
        {
            if (v[i] < v[start] + v[end])
                end--;

            else if (v[i] > v[start] + v[end])
                start++;

            else
            {
                if (start != i && end != i)
                {
                    cnt++;
                    break;
                }
                else if (start == i)
                    start++;
                else if (end == i)
                    end--;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}