#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string recourse;
    int n, result = 0;

    cin >> recourse;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (recourse.substr(0, 5) == v[i].substr(0, 5))
        {
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}