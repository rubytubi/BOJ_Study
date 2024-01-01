#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    int count = 0;

    scanf("%s", s1);

    for(int i = 0; i < strlen(s1); i++)
    {
        if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
            count++;
    }
    printf("%d\n", count);

    return 0;
}