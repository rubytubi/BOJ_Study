#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << max(a + b, a - b) << "\n";
    cout << min(a + b, a - b) << "\n";

    return 0;
}