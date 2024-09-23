#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        char p = ' ';
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (p != s[i])
            {
                cout << s[i];
                p = s[i];
            }
        }
        cout << "\n";
    }
}
