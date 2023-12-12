#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int t, a, b, lcom = 0;
  scanf("%d", &t);

  int num;

  for (int i = 1; i <= t; i++) {
    scanf("%d %d", &a, &b);

    num = 1;

    for (int j = 0; j < b; j++) {
      num = num * a;
      num = num % 10;
    }

    if (num == 0)
      printf("10\n");
    else
      printf("%d\n", num);
  }

  return 0;
}