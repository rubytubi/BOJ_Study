#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'S')
            {
                cout << str << "\n";
                break;
            }
        }
    }

    return 0;
}