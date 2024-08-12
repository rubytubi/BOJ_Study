#include <iostream>

using namespace std;

int cnt_d, cnt_b;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int p, t;
        cin >> p >> t;

        for (int i = 0; i < t; i++)
        {
            cnt_b++;
            cnt_d++;

            if (cnt_b == 4)
            {
                p++;
                cnt_b = 0;
            }

            if (cnt_d == 7)
            {
                p--;
                cnt_d = 0;
            }
        }
        cout << p << "\n";
        cnt_b = 0;
        cnt_d = 0;
    }

    return 0;
}