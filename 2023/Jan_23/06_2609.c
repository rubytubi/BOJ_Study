#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int lm, md;

    for(int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        md = i;
    }

    lm = (a * b) / md;

    printf("%d\n%d\n", md, lm);
    
    return 0;
}