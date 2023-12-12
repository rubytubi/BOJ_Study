#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num[5] = {
      0,
  };
  int average, middle, temp, sum = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      if (num[j] > num[j + 1]) {
        temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    sum += num[i];
  }
  average = sum / 5;

  middle = num[2];

  printf("%d\n%d\n", average, middle);

  return 0;
}