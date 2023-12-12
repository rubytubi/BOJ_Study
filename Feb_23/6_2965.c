#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b, c, sum = 0, lef, rig;
  scanf("%d %d %d", &a, &b, &c);

  lef = b - a - 1;
  rig = c - b - 1;

  if (rig >= lef)
    sum = rig;

  else
    sum = lef;

  printf("%d\n", sum);

  return 0;
}