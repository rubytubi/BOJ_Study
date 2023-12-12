#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int n, num;

  scanf("%d", &n);

  while (1) {
    scanf("%d", &num);

    if (num == 0)
      break;
    else if (num % n != 0) {
      printf("%d is NOT a multiple of %d.\n", num, n);
      continue;
    } else {
      printf("%d is a multiple of %d.\n", num, n);
      continue;
    }
  }

  return 0;
}