#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int t = 0, count = 0, sum = 0;
    char s1[80];

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%s", s1);

        count = 0;
        sum = 0;

        for(int i = 0; i < strlen(s1); i++)
        {
            if(s1[i] == 'O')
            {
                count += 1;
                sum += count;
            }
            else if(s1[i] == 'X')
            {    count = 0;
                continue;
            }    
        }
        printf("%d\n", sum);
    }

    return 0;
}