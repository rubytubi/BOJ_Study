#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = i - 1; j > 0; j--)
      printf(" ");
    for (int k = 2 * n - i * 2 + 1; k > 0; k--)
      printf("*");
    printf("\n");
  }
  for (int i = n - 1; i > 0; i--) {
    for (int j = i - 1; j > 0; j--)
      printf(" ");
    for (int k = 2 * n - 2 * i + 1; k > 0; k--)
      printf("*");
    printf("\n");
  }

  return 0;
}