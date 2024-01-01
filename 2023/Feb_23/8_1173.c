#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int N, m, M, T, R;
  int min = 0, pulse = 0;

  scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

  if (M - m < T) {
    printf("-1\n");

    return 0;
  }

  pulse = m;

  while (1) {
    if (pulse + T <= M) {
      pulse += T;
      N--;
    }

    else {
      pulse -= R;

      if (pulse < m)
        pulse = m;
    }
    min++;

    if (N == 0) {
      printf("%d\n", min);

      return 0;
    }
  }
}