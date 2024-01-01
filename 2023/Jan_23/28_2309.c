#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int temp, a, b;
    int dwarf[10] = { 0, }, sum = 0;

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &dwarf[i]);
        sum = sum + dwarf[i];
    }

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(dwarf[j] > dwarf[j + 1])
            {
                temp = dwarf[j];
                dwarf[j] = dwarf[j + 1];
                dwarf[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(i != j)
            {   
                if((sum - dwarf[i] - dwarf[j]) == 100)
                {
                    a = i; 
                    b = j;
                }
            }
            else 
            continue;    
        }
    }

    for(int i = 0; i < 9; i++)
    {
        if(a != i && i != b)
        printf("%d\n", dwarf[i]);
    }

    return 0;
}