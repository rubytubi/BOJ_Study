#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, num,
      seat[101] =
          {
              0,
          },
      count = 0;

  for (int i = 1; i <= 100; i++) {
    seat[i] = i;
  }
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &num);

    if (seat[num] == 0)
      count++;

    if (num == seat[num])
      seat[num] = 0;
  }
  printf("%d\n", count);

  return 0;
}