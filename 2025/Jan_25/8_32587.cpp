#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str, gulie;
    cin >> str >> gulie;

    int win1 = 0;
    int win2 = 0;

    for (int i = 0; i < n; i++)
    {
        if ((str[i] == 'R' && gulie[i] == 'S') ||
            (str[i] == 'S' && gulie[i] == 'P') ||
            (str[i] == 'P' && gulie[i] == 'R'))
            win1++;
        else if ((gulie[i] == 'R' && str[i] == 'S') ||
                 (gulie[i] == 'S' && str[i] == 'P') ||
                 (gulie[i] == 'P' && str[i] == 'R'))
            win2++;
    }

    if (win1 > win2)
        cout << "victory" << endl;
    else
        cout << "defeat" << endl;

    return 0;
}