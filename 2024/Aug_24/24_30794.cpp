#include <iostream>
#include <string>

using namespace std;

int main()
{
    int lv;
    string sign;
    cin >> lv >> sign;

    if (sign == "miss")
    {
        cout << 0 << endl;
    }
    else if (sign == "bad")
    {
        cout << 200 * lv << endl;
    }
    else if (sign == "cool")
    {
        cout << 400 * lv << endl;
    }
    else if (sign == "great")
    {
        cout << 600 * lv << endl;
    }
    else if (sign == "perfect")
    {
        cout << 1000 * lv << endl;
    }

    return 0;
}
