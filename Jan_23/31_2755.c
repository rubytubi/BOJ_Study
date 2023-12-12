#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n, credit;
  scanf("%d", &n);
  char sub[100], grade, sign;
  float count = 0, score = 0, allgrade = 0;

  for (int i = 0; i < n; i++) {
    scanf("%s %d %c%c", sub, &credit, &grade, &sign);

    if (grade == 'A') {
      score = 4.0f;

      if (sign == '+')
        score = score + 0.3f;
      else if (sign == '0')
        score = score;
      else if (sign == '-')
        score = score - 0.3f;

    } else if (grade == 'B') {
      score = 3.0f;

      if (sign == '+')
        score = score + 0.3f;
      else if (sign == '0')
        score = score;
      else if (sign == '-')
        score = score - 0.3f;

    } else if (grade == 'C') {
      score = 2.0f;

      if (sign == '+')
        score = score + 0.3f;
      else if (sign == '0')
        score = score;
      else if (sign == '-')
        score = score - 0.3f;

    } else if (grade == 'D') {
      score = 1.0f;

      if (sign == '+')
        score = score + 0.3f;
      else if (sign == '0')
        score = score;
      else if (sign == '-')
        score = score - 0.3f;

    } else if (grade == 'F') {
      score = 0.0f;
    }

    allgrade += score * credit;

    count += credit;
  }

  printf("%.2f\n", allgrade / count);

  return 0;
}