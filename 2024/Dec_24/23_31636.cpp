#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int cnt = 0;

    for (char c : s)
    {
        if (c == 'o')
        {
            cnt++;
            if (cnt >= 3)
            {
                cout << "Yes" << "\n";
                return 0;
            }
        }
        else
            cnt = 0;
    }

    cout << "No" << "\n";

    return 0;
}