#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char num[1000001];
  int length, count = 0, sum;

  scanf("%s", num);

  while (strlen(num) != 1) {

    sum = 0;
    length = strlen(num);

    for (int i = 0; i < length; i++) {
      sum += (int)num[i] - '0';
    }
    count++;

    sprintf(num, "%d", sum);
  }

  printf("%d\n", count);

  if (num[0] == '3' || num[0] == '6' || num[0] == '9') {
    printf("YES\n");
  }

  else {
    printf("NO\n");
  }
  return 0;
}