#include <iostream>

using namespace std;

int main()
{
    int p, q; // p: 확진자, q: 입원자
    cin >> p >> q;

    if (p <= 50 && q <= 10)
        cout << "White\n";

    else if (q > 30)
        cout << "Red\n";

    else
        cout << "Yellow\n";

    return 0;
}