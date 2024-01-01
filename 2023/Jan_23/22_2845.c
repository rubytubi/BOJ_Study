#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int l, p, per[6];
    int count = 0;
    
    scanf("%d %d", &l, &p);

    count = l * p;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &per[i]);

        printf("%d ", per[i] - count);
    }
    printf("\n");

    return 0;
}