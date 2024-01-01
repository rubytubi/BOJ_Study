#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = n; i > 0; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}