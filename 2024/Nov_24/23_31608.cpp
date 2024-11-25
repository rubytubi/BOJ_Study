#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int d = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] != t[i])
            d++;
    }

    cout << d << "\n";

    return 0;
}
