#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double d, f, p;
        cin >> d >> f >> p;

        double total = d * f * p;

        cout << fixed << setprecision(2) << "$" << total << endl;
    }

    return 0;
}
