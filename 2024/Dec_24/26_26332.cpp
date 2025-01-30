#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int c, p;
        cin >> c >> p;

        int price = c * p;
        int dis = 2 * (c - 1);
        int ans = price - dis;

        cout << c << " " << p << "\n"
             << ans << "\n";
    }

    return 0;
}