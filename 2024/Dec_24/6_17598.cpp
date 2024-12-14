#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tiger = 0, lion = 0;
    string vote;

    for (int i = 0; i < 9; i++)
    {
        cin >> vote;
        if (vote == "Tiger")
            tiger++;
        else if (vote == "Lion")
            lion++;
    }

    if (tiger > lion)
        cout << "Tiger\n";
    else
        cout << "Lion\n";

    return 0;
}
