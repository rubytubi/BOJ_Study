#include <iostream>

using namespace std;

int main()
{
    int n;

    int ret = 0;
    while (cin >> n)
    {
        ret += n;
    }

    cout << ret << endl;

    return 0;
}