#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m = 0, n = 0, sum, count = 0, min = 10001;
    int num[101] = { 0, };
    scanf("%d", &m);
    scanf("%d", &n);

    for(int i = 1; i <= 101; i++)
    {
        if(i * i >= m && i * i <= n)
        {
            num[i] = i * i;
            count++;
        }
    }

    for(int i = 0; i < 101; i++)
    {
        sum += num[i];
    }

    for(int i = 0; i < 101; i++)
    {
        if(num[i] < min && num[i] > 0)
            min = num[i]; 
    }

    if(count == 0)
        printf("-1\n");
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    
    return 0;
}