#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    bool ret = true;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[0])
        {
            ret = false;
            break;
        }
    }

    if (ret)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
