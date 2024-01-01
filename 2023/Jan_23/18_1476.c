#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int e = 0, s = 0, m = 0;
    int eatrhyear = 1;

    scanf("%d %d %d", &e, &s, &m);

    while (1)
    {
        if((eatrhyear - e) % 15 == 0 && (eatrhyear - s) % 28 == 0 && (eatrhyear - m) % 19 == 0)
        {
            break;
        }
        eatrhyear++;
       
    }
    
    printf("%d\n", eatrhyear);

    return 0;
}