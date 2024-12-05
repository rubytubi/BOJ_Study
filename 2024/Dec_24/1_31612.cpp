#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, total = 0;
    string s;

    cin >> n >> s;

    for (char c : s)
    {
        if (c == 'j' || c == 'i')
            total += 2;
        else if (c == 'o')
            total += 1;
    }

    cout << total << "\n";

    return 0;
}
