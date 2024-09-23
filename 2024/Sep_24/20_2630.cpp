#include <iostream>

using namespace std;

int arr[129][129];
int white, blue;

void check(int row, int col, int size)
{
    int cur = arr[row][col];
    bool flag = true;

    for (int i = row; i < row + size; i++)
    {
        for (int j = col; j < col + size; j++)
        {
            if (arr[i][j] != cur)
            {
                flag = false;
                break;
            }
        }
    }

    if (!flag)
    {
        check(row, col, size / 2);                       // 좌측 상단
        check(row, col + size / 2, size / 2);            // 우측 상단
        check(row + size / 2, col, size / 2);            // 좌측 하단
        check(row + size / 2, col + size / 2, size / 2); // 우측 하단
    }

    else
    {
        if (cur == 0)
            white++;
        else
            blue++;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
     