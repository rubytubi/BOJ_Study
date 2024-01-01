#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   int num[5] = { 0, }, x = 0;

   for(int i = 0; i < 5; i++)
   {
    scanf("%d", &num[i]);
   }

   while(num[0] != 1 || num[1] != 2 || num[2] != 3 || num[3] != 4 || num[4] != 5)
   {
        for(int i = 0; i < 4; i++)
        {
            if(num[i] > num[i + 1])
            {
                x = num[i];
                num[i] = num[i + 1];
                num[i + 1] = x;

                for(int j = 0; j < 5; j++)
                {
                    printf("%d ", num[j]);
                }
                printf("\n");
            }
        }
   }
        
    return 0;
}