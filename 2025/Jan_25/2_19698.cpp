#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, w, h, l;

    cin >>
        n >> w >> h >> l;

    int ret = min((w / l) * (h / l), n);

    cout << ret << "\n";

    return 0;
}
