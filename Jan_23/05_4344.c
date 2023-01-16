#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    int k, n;
    int p[15][15] = { 0, };

    for(int i = 0; i < 15; i++)
    {
        p[0][i] = i;
    }

    for(int i = 1; i <15; i++)
    {
        for(int j = 1; j < 15; j++)
        {
            p[j][i] += p[j - 1][i] + p[j][i - 1]; 
        }
    }
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", p[k][n]);
    }

    return 0;
}