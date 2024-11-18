#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    string ret = "";
    int i = 0;

    while (i < str.size())
    {
        ret += str[i];
        int n = str[i] - 'A' + 1;
        i += n;
    }

    cout << ret << "\n";

    return 0;
}
