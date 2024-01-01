#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num[10000] =
      {
          0,
      },
      sum = 0, count = 1;
  int a, b;
  scanf("%d %d", &a, &b);

  for (int i = 1; count <= 1000; i++) {
    for (int j = 0; j < i; j++) {
      num[count] = i;
      count++;
    }
  }

  for (int i = a; i <= b; i++) {
    sum += num[i];
  }
  printf("%d\n", sum);

  return 0;
}