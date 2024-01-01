#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  2007 1 1 -> 월욜

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int day = 0;
    
    if(x != 1)
    {
        for(int i = 1; i <= x - 1; i++)
        {
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                day += 31;
            }
        
            else if(i == 4 || i == 6 || i == 9 || i == 11)
            {
                day += 30;
            }   

            else if(i == 2)
            {
                day += 28;
            }   
        }
            day = day + y;

        if((day % 7) == 1)
        printf("MON\n");
        else if((day % 7) == 2)
        printf("TUE\n");
        else if((day % 7) == 3)
        printf("WED\n");
        else if((day % 7) == 4)
        printf("THU\n");
        else if((day % 7) == 5)
        printf("FRI\n");
        else if((day % 7) == 6)
        printf("SAT\n");
        else if((day % 7) == 0)
        printf("SUN\n");

    }

    else if(x == 1)
    {
        if((y % 7) == 1)
        printf("MON\n");
        else if((y % 7) == 2)
        printf("TUE\n");
        else if((y % 7) == 3)
        printf("WED\n");
        else if((y % 7) == 4)
        printf("THU\n");
        else if((y % 7) == 5)
        printf("FRI\n");
        else if((y % 7) == 6)
        printf("SAT\n");
        else if((y % 7) == 0)
        printf("SUN\n");
    }

    return 0;
}