#include <iostream>

using namespace std;

int cnt;

int main()
{
    int sleep, wakeup;
    cin >> sleep >> wakeup;

    if (sleep >= 20)
        cnt = 24 - sleep + wakeup;

    else
        cnt = wakeup - sleep;

    cout << cnt << "\n";

    return 0;
}