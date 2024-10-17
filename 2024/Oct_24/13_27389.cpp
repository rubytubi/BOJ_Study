#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double ret = n / 4.0;

    cout << fixed << setprecision(2) << ret << endl;

    return 0;
}
