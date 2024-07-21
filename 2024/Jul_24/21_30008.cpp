#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(k);
    for (int i = 0; i < k; ++i)
    {
        cin >> v[i];
    }

    vector<int> ret;

    for (int i = 0; i < k; ++i)
    {
        int p = (v[i] * 100) / n;
        if (0 <= p && p <= 4)
        {
            ret.push_back(1);
        }
        else if (4 < p && p <= 11)
        {
            ret.push_back(2);
        }
        else if (11 < p && p <= 23)
        {
            ret.push_back(3);
        }
        else if (23 < p && p <= 40)
        {
            ret.push_back(4);
        }
        else if (40 < p && p <= 60)
        {
            ret.push_back(5);
        }
        else if (60 < p && p <= 77)
        {
            ret.push_back(6);
        }
        else if (77 < p && p <= 89)
        {
            ret.push_back(7);
        }
        else if (89 < p && p <= 96)
        {
            ret.push_back(8);
        }
        else if (96 < p && p <= 100)
        {
            ret.push_back(9);
        }
    }

    for (int i = 0; i < ret.size(); ++i)
    {
        cout << ret[i];
        if (i < ret.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
