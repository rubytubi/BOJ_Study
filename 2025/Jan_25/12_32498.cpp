#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        if (d % 2 != 0)
            cnt++;
    }

    cout << cnt << "\n";
    return 0;
}