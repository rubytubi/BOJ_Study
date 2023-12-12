#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *num = malloc(sizeof(int) * 5000000);
    int n = 0, k = 0, temp;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);

        for(int j = 0; j < n - 1; j++)
        {
            if(num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("%d\n", num[k]);

    return 0;
}