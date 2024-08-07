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

    if (v[0] + v[1] == v[2])
        cout << "1\n";

    else if (v[0] * v[1] == v[2])
        cout << "2\n";

    else
        cout << "3\n";

    return 0;
}