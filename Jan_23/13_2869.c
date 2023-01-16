#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int v = 0, a = 0, b = 0, day = 0;
    scanf("%d %d %d", &a, &b, &v);

    if((v - b) % (a - b) != 0)
    {
        day = ((v - b) / (a - b)) + 1;
    }
    else if((v - b) % (a - b) == 0)
    {
        day = (v - b) / (a - b);
    }

    printf("%d\n", day);

    return 0;
}