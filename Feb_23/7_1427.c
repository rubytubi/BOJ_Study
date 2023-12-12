#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//'0' ~ '9'
// 48 ~ 57
int main() {
  char num[10];
  int n[11] = {
      0,
  };

  int length;

  scanf("%s", num);

  length = strlen(num);

  for (int i = 0; i < length; i++) {
    n[num[i] - 48]++;
  }

  for (int i = 9; i >= 0; i--) {
    while (n[i] != 0) {
      printf("%d", i);
      n[i]--;
    }
  }
  printf("\n");

  return 0;
}