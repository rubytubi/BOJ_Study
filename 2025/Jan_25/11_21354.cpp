#include <iostream>

using namespace std;

int main()
{
    int a, p;
    cin >> a >> p;

    int axel = a * 7;
    int petra = p * 13;

    if (axel > petra)
        cout << "Axel" << "\n";
    else if (axel < petra)
        cout << "Petra" << "\n";
    else
        cout << "lika" << "\n";

    return 0;
}