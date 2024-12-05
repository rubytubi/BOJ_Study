#include <iostream>
#include <string>

using namespace std;

int main()
{
    string socks;
    cin >> socks;

    int white_cnt = 0;
    int black_cnt = 0;

    for (char c : socks)
    {
        if (c == 'B')
        {
            white_cnt++;
        }
        else if (c == 'C')
        {
            black_cnt++;
        }
    }

    int w = white_cnt / 2;
    int b = black_cnt / 2;

    cout << (w + b) << "\n";

    return 0;
}
