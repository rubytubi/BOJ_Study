#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chess[9][9];
    int count = 0;

     for(int i = 0; i < 8; i++)
     {
        scanf("%s", chess[i]);
     }

     for(int i = 0; i < 8; i++)
     {
        for(int j = 0; j < 8; j++)
        {
            if(((i + j) % 2 == 0) && chess[j][i] == 'F')
            count++;
        }
     }

     printf("%d\n", count);
     

    return 0;
}



