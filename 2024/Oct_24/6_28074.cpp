#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char c[5] = {'M', 'O', 'B', 'I', 'S'};
    string str;
    cin >> str;

    for (int i = 0; i < 5; i++)
    {
        if (find(str.begin(), str.end(), c[i]) == str.end())
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}