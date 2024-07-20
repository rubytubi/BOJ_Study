#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_seven(int n)
{
    string str = to_string(n);
    return find(str.begin(), str.end(), '7') != str.end();
}

int main()
{
    int num;
    cin >> num;

    if (is_seven(num))
    {
        if (num % 7 != 0)
            cout << "2\n";
        else
            cout << "3\n";
    }

    else
    {
        if (num % 7 != 0)
            cout << "0\n";
        else
            cout << "1\n";
    }

    return 0;
}