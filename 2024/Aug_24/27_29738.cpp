#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        string ans = "Round 1";

        if (n <= 25)
            ans = "World Finals";

        else if (n <= 1000)
            ans = "Round 3";

        else if (n <= 4500)
            ans = "Round 2";

        cout << "Case #" << i + 1 << ": " << ans << endl;
    }

    return 0;
}
