#include <iostream>

using namespace std;

int cnt = 1;

int main()
{
    while (true)
    {
        int n = -1;
        cin >> n;

        if (n == 0)
        {
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
        }

        cout << "Case " << cnt << ": Sorting... done!\n";
        cnt++;
    }

    return 0;
}