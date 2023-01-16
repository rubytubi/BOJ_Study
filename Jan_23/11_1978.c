#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int division(int a)
{
    int count = 0;
    int num[1001] = { 0, };

    for(int i = 0; i < 1000; i++)
    {
        num[i] = i + 1;
    }

    for(int i = 0; i < a; i++)
    {
        if(a % num[i] == 0)
        count++;

        else 
        continue;
    }

    if(count == 2)
    return 1;

    else
    return 0;
}

int main()
{
    int n = 0, number = 0, count = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &number);

        if(division(number) == 1)
        {
            count++;
        }
        else
        continue;
    }
    printf("%d\n", count);

    return 0;
}