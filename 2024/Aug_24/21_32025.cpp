#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    int ans = min(h, w);

    cout << (floor((ans / 2.0) * 100)) << endl;

    return 0;
}
