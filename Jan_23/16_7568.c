#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0, k = 0;
    scanf("%d", &n);

    int weight[51] = { 0, }, height[51] = { 0, };

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &weight[i], &height[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        k = 0; 
        for(int j = 0; j < n; j++)
        {
            if(weight[i] < weight[j] && height[i] < height[j])
                k++;
        }        
        printf("%d ", k + 1);
    }
    printf("\n");

    return 0;
}