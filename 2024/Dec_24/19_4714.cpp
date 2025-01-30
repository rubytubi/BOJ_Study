#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double w;
    while (true)
    {
        cin >> w;
        if (w < 0)
            break;
        double moon = w * 0.167;

        cout << fixed << setprecision(2);
        cout << "Objects weighing " << w << " on Earth will weigh " << moon << " on the moon.\n";
    }
    return 0;
}