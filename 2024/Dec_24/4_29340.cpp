#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b, ret = "";
    cin >> a >> b;

    for (int i = 0; i < a.size(); ++i)
    {
        ret += max(a[i], b[i]);
    }

    cout << ret << endl;

    return 0;
}
