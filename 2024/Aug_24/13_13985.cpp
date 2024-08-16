#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int f = str[0] - '0';
    int s = str[4] - '0';
    int res = str[8] - '0';

    if (f + s == res)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}