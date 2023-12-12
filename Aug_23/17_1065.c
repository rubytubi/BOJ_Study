#include <stdbool.h>
#include <stdio.h>

bool arithmetic_sequence(int number) {
  if (number < 100)
    return true;
  int hun, ten, dig;
  hun = number / 100;
  ten = number % 100 / 10;
  dig = number % 10;

  if ((hun - ten) == (ten - dig))
    return true;
  else
    return false;
}

int main() {
  int n, count = 0;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    if (arithmetic_sequence(i))
      count++;
  }

  printf("%d\n", count);

  return 0;
}
