#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    int N, length;
    scanf("%d", &N);
    char file[51][51];
    int a = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%s", file[i]);
    }
    length = strlen(file[0]);

    if(N == 1)
    printf("%s\n", file[0]);

    else
    {
        for(int i = 0; i < length; i++)
        {
            a = 0;
            for(int j = 0; j < N; j++)
            {
                if(file[0][i] != file[j][i])
                    a = 1;
            }
            if(a == 1)
                file[0][i] = '?';
        }

        printf("%s\n", file[0]);
    }

    return 0;
}