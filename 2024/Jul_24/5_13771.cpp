#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

vector<double> v;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double d;
        cin >> d;

        v.push_back(d);
    }

    sort(v.begin(), v.end());

    cout << fixed << setprecision(2) << v[1] << '\n';

    return 0;
}