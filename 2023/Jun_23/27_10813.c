#include <stdio.h>

int main() {
  int n, m, a, b;
  int temp, ball[100];

  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++)
    ball[i] = i + 1;

  for (int i = 0; i < m; i++) {
    scanf("%d %d", &a, &b);

    temp = ball[a - 1];

    ball[a - 1] = ball[b - 1];

    ball[b - 1] = temp;
  }

  for (int i = 0; i < n; i++)
    printf("%d ", ball[i]);

  return 0;
}