#include <iostream>

using namespace std;

int main()
{
    int s, m, l;

    cin >> s >> m >> l;

    int h = 1 * s + 2 * m + 3 * l;

    if (h >= 10)
        cout << "happy" << endl;
    else
        cout << "sad" << endl;

    return 0;
}
