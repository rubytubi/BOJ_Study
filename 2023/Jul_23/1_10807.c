#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main() {

  int n;
  int num[100];
  int v;
  int count = 0;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }

  scanf("%d", &v);

  for (int j = 0; j < n; j++) {
    if (num[j] == v)
      count++;
  }

  printf("%d", count);
}
