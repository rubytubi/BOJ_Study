#include <cstring>
#include <iostream>

using namespace std;

char c[10001];
int cnt;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    char hello;
    cin >> hello;

    for (int i = 0; i < n; i++)
    {
        if (c[i] == hello)
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}