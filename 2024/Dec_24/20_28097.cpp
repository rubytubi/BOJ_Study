#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n);

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        tot += t[i];
        if (i < n - 1)
        {
            tot += 8;
        }
    }

    int d = tot / 24;
    int h = tot % 24;

    cout << d << " " << h << "\n";

    return 0;
}