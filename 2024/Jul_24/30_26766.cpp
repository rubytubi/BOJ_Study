#include <iostream>
#include <string>

using namespace std;

string str[] = {
    " @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     "};

int main()
{
    int n;
    cin >> n;

    int size = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < size; i++)
        {
            cout << str[i]
                 << "\n";
        }
    }

    return 0;
}