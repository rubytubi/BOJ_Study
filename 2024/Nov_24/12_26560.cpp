#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i)
    {
        string str;
        getline(cin, str);

        if (str.empty() || str.back() != '.')
            str += '.';

        cout << str << endl;
    }

    return 0;
}
