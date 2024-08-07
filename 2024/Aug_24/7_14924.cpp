#include <iostream>

using namespace std;

int main()
{
    int s, t, d;
    cin >> s >> t >> d;

    int T;
    T = d / (2 * s);

    cout << t * T << "\n";

    return 0;
}