#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;

    vector<int> v(n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
        sum += v[i];
    }

    int remain = k - sum;

    int i = n - 1;
    while (remain > 0)
    {
        v[i] += remain;
        remain = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
