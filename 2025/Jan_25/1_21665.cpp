#include <iostream>
#include <string>

using namespace std;

char ori[101][101];

int main()
{
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> ori[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char x;
            cin >> x;

            if ((ori[i][j] == 'B' && x != 'W') || (ori[i][j] == 'W' && x != 'B'))
                ans++;
        }
    }

    cout << ans;

    return 0;
}
