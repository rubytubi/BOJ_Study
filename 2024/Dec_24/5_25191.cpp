#include <iostream>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;

    int sum = a / 2 + b;

    if (sum < n)
        cout << sum << "\n";

    else
        cout << n << "\n";

    return 0;
}