#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ret = (a + b) % 12;
    if (ret == 0)
        ret = 12;

    cout << ret << endl;

    return 0;
}