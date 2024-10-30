#include <iostream>

using namespace std;

int main()
{
    int a[4], b[4], sum_a = 0, sum_b = 0;
    for (int i = 1; i <= 3; i++)
    {
        cin >> a[i];
        sum_a += ((4 - i) * a[i]);
    }
    for (int i = 1; i <= 3; i++)
    {
        cin >> b[i];
        sum_b += ((4 - i) * b[i]);
    }

    if (sum_a == sum_b)
        cout << "T\n";
    else if (sum_a > sum_b)
        cout << "A\n";
    else
        cout << "B\n";

    return 0;
}