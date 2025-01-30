#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    cin >> t;

    double price_blaster = 350.34;
    double price_visual_sensor = 230.90;
    double price_auditory_sensor = 190.55;
    double price_arm = 125.30;
    double price_leg = 180.90;

    for (int i = 0; i < t; ++i)
    {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;

        double tot = (A * price_blaster) +
                     (B * price_visual_sensor) +
                     (C * price_auditory_sensor) +
                     (D * price_arm) +
                     (E * price_leg);

        cout << fixed << setprecision(2) << "$" << tot << endl;
    }

    return 0;
}