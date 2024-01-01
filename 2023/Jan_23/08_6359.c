#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t, n, count = 0;
    scanf("%d", &t);
   
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        int room[101] = { 0, };
        count = 0;

        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k * j <= n; k++)
            {
                if(room[k * j] == 0)
                room[k*j] = 1;
                else if(room[k*j] == 1)
                room[k*j] = 0;
            }
        } 
        
        for(int j = 1; j <= n; j++)
        {
            if(room[j] == 1)
            count++;
        }
        
        printf("%d\n", count);
    }


    return 0;
}