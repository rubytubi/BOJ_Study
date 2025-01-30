#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    int tot = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        tot += v[i];
    }

    int ans = d / tot;

    for (int i = 0; i < n; ++i)
    {
        cout << v[i] * ans << endl;
    }

    return 0;
}