#include <iostream>
#include <string>

using namespace std;

string delete_dup(string &s)
{
    string ret;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (i == 0 || s[i] != s[i - 1])
            ret += s[i];
    }

    return ret;
}

int main()
{
    string s;

    getline(cin, s);
    string msg = delete_dup(s);

    cout << msg << endl;

    return 0;
}
