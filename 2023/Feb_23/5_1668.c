#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num[51] =
      {
          0,
      },
      n, back = 0, front = 0, t;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }

  t = 0;

  for (int i = 0; i < n; i++) {
    if (num[i] > t) {
      front++;
      t = num[i];
    }
  }

  t = 0;

  for (int i = n - 1; i >= 0; i--) {
    if (num[i] > t) {
      back++;
      t = num[i];
    }
  }

  printf("%d\n%d\n", front, back);

  return 0;
}