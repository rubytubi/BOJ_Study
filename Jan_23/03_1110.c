#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, n;
    int a = 0, b = 0, c = 0, d = 100;
    int count = 0;
    scanf("%d", &N);
    n = N;

    while(d != n)
    {
        b = N / 10;
        a = N % 10;
        c = (a + b) % 10;
        d = (a * 10) + c;
        N = d;

        count++;
    }

    printf("%d\n", count);

    return 0;
}