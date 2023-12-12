#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rev(int a) {
  if (a >= 1000) {
    a = a / 1000 + ((a / 100) % 10) * 10 + ((a % 100) / 10) * 100 +
        (a % 10) * 1000;
  }

  else if (a >= 100) {
    a = a / 100 + ((a - (a / 100) * 100) / 10) * 10 + (a % 10) * 100;
  }

  else if (a < 100 && a >= 10) {
    a = a / 10 + (a % 10) * 10;
  }

  else if (a < 10) {
    a = a;
  }

  return a;
}

int main() {
  int x, y, revnum;
  scanf("%d %d", &x, &y);

  revnum = rev(x) + rev(y);

  printf("%d\n", rev(revnum));

  return 0;
}