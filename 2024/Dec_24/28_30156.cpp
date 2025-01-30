#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int count_a = count(s.begin(), s.end(), 'a');
        int count_b = s.size() - count_a;

        cout << min(count_a, count_b) << endl;
    }

    return 0;
}
