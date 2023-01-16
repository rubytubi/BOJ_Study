#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n;
    char s1[21];

    for(int i = 0; i < t; i++)
    {
        scanf("%d %s", &n, s1);

        for(int j = 0; j < strlen(s1); j++)
        {
            for(int k = 0; k < n; k++)
            {
                printf("%c", s1[j]);
            }
       }
       printf("\n");
    }

    return 0;
}