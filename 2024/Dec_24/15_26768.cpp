#include <iostream>
#include <string>

using namespace std;

string hacker(string input)
{
    string ret = input;
    for (char &c : ret)
    {
        switch (c)
        {
        case 'a':
            c = '4';
            break;
        case 'e':
            c = '3';
            break;
        case 'i':
            c = '1';
            break;
        case 'o':
            c = '0';
            break;
        case 's':
            c = '5';
            break;
        }
    }
    return ret;
}

int main()
{
    string input;
    cin >> input;
    cout << hacker(input) << "\n";
    return 0;
}
