#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;

    cin >> n >> str;

    for (int i = 0; i < n - 1; i++)
    {
        if (str[i + 1] == 'J')
            cout << str[i] << "\n";
    }

    return 0;
}