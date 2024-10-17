#include <string.h>
#include <iostream>

using namespace std;

int cnt;

int recursion(const char *s, int l, int r)
{
    cnt++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    char c[1001];
    cin.ignore();

    while (n--)
    {
        cin.getline(c, 1001);

        cout << isPalindrome(c) << " " << cnt << endl;
        cnt = 0;
    }

    return 0;
}