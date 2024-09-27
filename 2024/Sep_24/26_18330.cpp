#include <iostream>

using namespace std;

int ans;

int main()
{
    int n, k;
    cin >> n >> k;

    int a = k + 60;

    if (n <= a)
        ans = n * 1500;
    else
        ans = a * 1500 + (n - a) * 3000;

    cout << ans << endl;

    return 0;
}
