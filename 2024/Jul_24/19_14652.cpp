#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int r = k / m;
    int c = k % m;

    cout << r << " " << c << "\n";

    return 0;
}