#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int a = 0, b = 0;

    for (size_t i = 0; i < str.length(); i += 2)
    {
        char p = str[i];
        int point = str[i + 1] - '0';

        if (p == 'A')
            a += point;
        else
            b += point;
    }

    if (a >= 11 && a - b >= 2)
        cout << "A" << "\n";
    else if (b >= 11 && b - a >= 2)
        cout << "B" << "\n";
    else
        cout << (a > b ? "A" : "B") << "\n";

    return 0;
}