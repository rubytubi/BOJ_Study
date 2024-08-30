#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, p, c;
    cin >> a >> p >> c;

    cout << max(a + c, p);

    return 0;
}