#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, a[50] = { 0, };
    int max, min, num = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);
    
    min = max = a[0];

    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }

        if(a[i] > max)
        {
            max = a[i];
        }
    }    

    num = min * max;

    printf("%d\n", num);

    return 0;
}