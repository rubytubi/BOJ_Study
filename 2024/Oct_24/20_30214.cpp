#include <iostream>

using namespace std;

int main()
{
    double s1, s2;
    cin >> s1 >> s2;

    if (s1 >= s2 / 2.0)
        cout << "E\n";
    else
        cout << "H\n";

    return 0;
}
