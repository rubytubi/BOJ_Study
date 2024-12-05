#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> v[1010];
bool visited[1010];
int cnt;

void dfs(int x)
{
    visited[x] = true;
    for (int i = 0; i < v[x].size(); i++)
    {
        int y = v[x][i];
        if (!visited[y])
            dfs(y);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;

        v[t1].push_back(t2);
        v[t2].push_back(t1);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i]) // 새로운 연결 요소인지
        {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << "\n";

    return 0;
}