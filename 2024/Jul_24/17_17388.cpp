#include <iostream>
#include <algorithm>

using namespace std;

int m;

int main()
{
    int s, k, h;
    cin >> s >> k >> h;

    if (s + k + h >= 100)
        cout << "OK\n";

    else
    {
        if (s < k && s < h)
            cout << "Soongsil\n";
        else if (k < s && k < h)
            cout << "Korea\n";
        else if (h < s && h < k)
            cout << "Hanyang\n";
    }

    return 0;
}