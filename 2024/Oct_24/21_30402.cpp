#include <iostream>

using namespace std;

char c[20][20];

int main()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == 'w')
            {
                cout << "chunbae\n";
                return 0;
            }
            else if (c[i][j] == 'b')
            {
                cout << "nabi\n";
                return 0;
            }
            else if (c[i][j] == 'g')
            {
                cout << "yeongcheol\n";
                return 0;
            }
            else
                continue;
        }
    }
}