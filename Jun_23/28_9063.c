#include <stdio.h>

int main() {
  int n, x, y;

  scanf("%d", &n);
  int x_max = -10000, x_min = 10000, y_max = -10000, y_min = 10000;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    if (x >= x_max)
      x_max = x;
    if (x < x_min)
      x_min = x;
    if (y >= y_max)
      y_max = y;
    if (y < y_min)
      y_min = y;
  }
  printf("%d", (x_max - x_min) * (y_max - y_min));

  return 0;
}
