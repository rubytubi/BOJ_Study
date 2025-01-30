#include <iostream>

using namespace std;

int main()
{
    long long r, c, n;
    cin >> r >> c >> n;

    long long row = (r + n - 1) / n;
    long long col = (c + n - 1) / n;

    long long ret = row * col;

    cout << ret << "\n";

    return 0;
}