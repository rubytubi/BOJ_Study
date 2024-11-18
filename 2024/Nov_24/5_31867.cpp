#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string k;

    cin >> n;
    cin >> k;

    int even = 0;
    int odd = 0;
    for (char c : k)
    {
        if ((c - '0') % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (even > odd)
    {
        cout << 0;
    }
    else if (odd > even)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }

    return 0;
}
