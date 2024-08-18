#include <iostream>

using namespace std;

int sum;

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == -1)
        {
            cout << sum << "\n";
            return 0;
        }

        sum += n;
    }
}