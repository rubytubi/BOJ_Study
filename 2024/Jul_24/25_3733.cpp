#include <iostream>

using namespace std;

int main()
{
    long long n, s;

    while (cin >> n >> s)
    {
        long long x = s / (n + 1);

        cout << x << endl;
    }

    return 0;
}
