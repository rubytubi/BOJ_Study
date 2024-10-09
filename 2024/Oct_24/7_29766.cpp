#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

int cnt;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string str;
    cin >> str;

    string dksh = "DKSH";

    if (str.length() < 4)
    {
        cout << "0\n";
        return 0;
    }

    for (int i = 0; i <= str.length() - dksh.length(); i++)
    {
        bool flag = true;

        for (int j = 0; j < dksh.length(); j++)
        {
            if (str[i + j] != dksh[j])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}