#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;

    string str;

    vector<string> v;

    for (int i = 0; i < t; i++)
    {
        cin >> str;
        v.push_back(str);
    }

    int k;
    cin >> k;

    if (k == 1)
    {
        for (int i = 0; i < t; i++)
        {
            cout << v[i] << "\n";
        }
    }

    else if (k == 2)
    {
        for (int i = 0; i < t; i++)
        {
            reverse(v[i].begin(), v[i].end());
            cout << v[i] << "\n";
        }
    }

    else
    {
        for (int i = t - 1; i >= 0; i--)
        {
            cout << v[i] << "\n";
        }
    }

    return 0;
}
