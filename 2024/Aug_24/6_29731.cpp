#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<string> str = {"Never gonna give you up",
                      "Never gonna let you down",
                      "Never gonna run around and desert you",
                      "Never gonna make you cry",
                      "Never gonna say goodbye",
                      "Never gonna tell a lie and hurt you",
                      "Never gonna stop"};

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);

        int i = 0;

        for (i = 0; i < 7; i++)
        {
            if (s == str[i])
                break;
        }

        if (i == 7)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}
