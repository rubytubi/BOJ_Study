#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, k, i;
  int count = 0;

  scanf("%d %d", &n, &k);

  for (i = 1; i <= n; i++) {
    if (n % i == 0)
      count++;

    if (count == k)
      break;
  }

  if (i <= n)
    printf("%d\n", i);
  else
    printf("0\n");

  return 0;
}