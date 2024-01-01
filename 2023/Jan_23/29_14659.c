#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int n, count = 0, max = 0;
  scanf("%d", &n);

  int mt[30000] = {
      0,
  };

  for (int i = 0; i < n; i++) {
    scanf("%d", &mt[i]);
  }

  for (int i = 0; i < n; i++) {
    count = 0;

    for (int j = i + 1; j < n; j++) {
      if (mt[i] < mt[j]) {
        break;
      } else if (mt[i] > mt[j]) {
        count++;

        if (count > max)
          max = count;
      }
    }
  }
  printf("%d\n", max);

  return 0;
}