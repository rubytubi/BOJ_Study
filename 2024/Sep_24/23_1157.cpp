#include <iostream>
#include <cstring>

using namespace std;

int a[30], cnt;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] < 97)
            a[str[i] - 65]++;
        else
            a[str[i] - 97]++;
    }

    int max = -1, check = 0;

    for (int i = 0; i < 26; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            check = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (max == a[i])
            cnt++;
    }

    if (cnt > 1)
        cout << "?\n";

    else
        cout << (char)(check + 65) << "\n";

    return 0;
}