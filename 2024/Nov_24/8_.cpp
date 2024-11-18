#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m = {
        {"Poblano", 1500},
        {"Mirasol", 6000},
        {"Serrano", 15500},
        {"Cayenne", 40000},
        {"Thai", 75000},
        {"Habanero", 125000}};

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        total += m[str];
    }

    cout << total << "\n";

    return 0;
}