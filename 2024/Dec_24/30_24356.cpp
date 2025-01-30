#include <iostream>

using namespace std;

int main()
{
    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2;

    int start = t1 * 60 + m1;
    int end = t2 * 60 + m2;

    if (end < start)
    {
        end += 24 * 60;
    }

    int tot = end - start;
    int lap = tot / 30;

    cout << tot << " " << lap << "\n";

    return 0;
}
