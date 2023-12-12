#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int h, m, s, H, M, S;
  int time, hour, min, sec;

  for (int i = 0; i < 3; i++) {
    scanf("%d %d %d %d %d %d", &h, &m, &s, &H, &M, &S);

    time = (H * 3600 + M * 60 + S) - (h * 3600 + m * 60 + s);

    hour = time / 3600 % 24;
    min = time / 60 % 60;
    sec = time % 60;

    printf("%d %d %d\n", hour, min, sec);
  }

  return 0;
}