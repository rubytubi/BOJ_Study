#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int euclid(int a, int b)
{
    if(b == 0)
    return a;

    else
    return euclid(b, a % b);
}

int main()
{
    int n; 
    int x, y, less;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {   
        scanf("%d %d", &x,&y);

        less = x * y / euclid(x, y);

        printf("%d\n", less);
    }

    return 0;
}