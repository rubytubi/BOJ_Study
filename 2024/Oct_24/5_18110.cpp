#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v;
double avg;
double trimmed;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "0\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);
    }

    sort(v.begin(), v.end());

    trimmed = n * 0.15;
    trimmed = floor(trimmed + 0.5);

    for (int i = trimmed; i < n - trimmed; i++)
    {
        avg += v[i];
    }

    avg = avg / (n - 2 * trimmed);

    cout << floor(0.5 + avg) << "\n";

    return 0;
}