#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a[1001] = { 0, }, n;
    double average = 0, max = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > max)
        max = a[i];
    }

    for(int i = 0; i < n; i++)
    {
        average += ((double)a[i] / max) * 100;
    }
    
    printf("%lf\n", (average / n));

    return 0;
}