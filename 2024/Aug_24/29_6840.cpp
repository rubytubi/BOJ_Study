#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int t;
        cin >> t;

        v.push_back(t);
    }

    sort(v.begin(), v.end());

    cout << v[1] << "\n";

    return 0;
}