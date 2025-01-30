#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;

    vector<int> v(n);
    int tot = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        tot += v[i];
    }

    if (tot >= t)
        cout << "Padaeng_i Happy" << endl;
    else
        cout << "Padaeng_i Cry" << endl;

    return 0;
}