#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;

        if (row.find('+') != string::npos)
            ans++;
    }

    cout << ans << endl;

    return 0;
}
