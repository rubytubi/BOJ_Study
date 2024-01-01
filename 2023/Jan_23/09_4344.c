#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c, n;
    scanf("%d", &c);
    double average = 0;
    
    for(int i = 0; i < c; i++)
    {
        scanf("%d", &n);

        int sum = 0;
        int score[1001] = { 0, };
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
        }

        for(int j = 0; j < n; j++)
        {
            sum = score[j] + sum;
        }
        
        average = (double)(sum / n);

        for(int j = 0; j < n; j++)
        {
            if((double)score[j] > average)
            {   
                count++;
            }
        }
        
        printf("%.3lf%%\n", (double)count / n * 100);
    }

    return 0;
}