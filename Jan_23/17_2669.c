#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num[101][101] = { 0, };
    int lx, ly, rx, ry;
    int count = 0;

    for(int i = 1; i <=4; i++)
    {
        scanf("%d %d %d %d", &lx, &ly, &rx, &ry);
        
        for(int j = 100 - ry; j < 100 - ly; j++)
        {
            for(int k = lx; k < rx; k++)
            {
                num[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 101; i++)
    {
        for(int j = 0; j <= 100; j++)
        {
            if(num[i][j] == 1)
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}