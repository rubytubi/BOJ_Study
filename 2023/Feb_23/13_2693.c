#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  int t, temp;

  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int num[10] = {
        0,
    };
    for (int j = 0; j < 10; j++) {
      scanf("%d", &num[j]);

      for (int k = 0; k < 10; k++) {
        for (int l = 0; l < 9; l++) {
          if (num[l] < num[l + 1]) {

            temp = num[l];
            num[l] = num[l + 1];
            num[l + 1] = temp;
          }
        }
      }
    }
    printf("%d\n", num[2]);
  }

  return 0;
}