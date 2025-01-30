#include <iostream>

using namespace std;

int main()
{

    int num[] = {9, 7, 8, 0, 9, 2, 1, 4, 1, 8, 0, 0, 0};

    int a, b, c;
    cin >> a >> b >> c;

    num[10] = a;
    num[11] = b;
    num[12] = c;

    int sum = 0;
    for (int i = 0; i < 13; i++)
    {
        if (i % 2 == 0)
            sum += num[i] * 1;
        else
            sum += num[i] * 3;
    }

    cout << "The 1-3-sum is " << sum << "\n";

    return 0;
}