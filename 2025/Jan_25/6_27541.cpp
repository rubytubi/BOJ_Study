#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    if (s[n - 1] == 'G')
        s = s.substr(0, n - 1);
    else
        s += 'G';

    cout << s << endl;

    return 0;
}