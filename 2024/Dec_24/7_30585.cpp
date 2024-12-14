#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    int zerocnt = 0, onecnt = 0;
    char c;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> c;
            if (c == '0')
                zerocnt++;

            else if (c == '1')
                onecnt++;
        }
    }

    cout << min(zerocnt, onecnt) << "\n";

    return 0;
}
