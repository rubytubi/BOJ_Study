#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<long long> psum;
unordered_map<long long, long long> mod_cnt;
long long cnt;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    long long n, m;
    cin >> n >> m;

    psum.push_back(0);

    for (int i = 1; i <= n; i++)
    {
        long long t;
        cin >> t;
        long long sum = t;
        sum += psum[i - 1];

        psum.push_back(sum);
        long long mod = psum[i] % m;

        if (mod == 0)
            cnt++;

        cnt += mod_cnt[mod];

        mod_cnt[mod]++;
    }

    cout << cnt << "\n";

    return 0;
}