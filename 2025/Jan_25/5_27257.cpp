#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int b = 0;
    int len = str.length();

    while (len > 0 && str[len - 1] == '0')
    {
        len--;
    }

    for (int i = 0; i < len; ++i)
    {
        if (str[i] == '0')
            b++;
    }

    cout << b << "\n";

    return 0;
}