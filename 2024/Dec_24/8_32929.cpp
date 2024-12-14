#include <iostream>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    int pos = (x - 1) % 3;
    if (pos == 0)
        cout << 'U' << endl;
    else if (pos == 1)
        cout << 'O' << endl;
    else
        cout << 'S' << endl;

    return 0;
}
