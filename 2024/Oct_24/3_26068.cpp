#include <iostream>
#include <string>

using namespace std;

int ans;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        int d = stoi(str.substr(2));

        if (d <= 90)
            ans++;
    }

    cout << ans << "\n";

    return 0;
}