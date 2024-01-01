#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int num[9][9];
  int max = 0;
  int row = 0, col = 0;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      scanf("%d", &num[i][j]);

      if (max <= num[i][j]) {
        max = num[i][j];
        row = i + 1;
        col = j + 1;
      }
    }
  }

  printf("%d \n", max);
  printf("%d %d\n", row, col);

  return 0;
}