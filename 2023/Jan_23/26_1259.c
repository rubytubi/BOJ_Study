#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char num[100000];
  int length;

  while (1) {
    scanf("%s", num);

    bool palindrome = true;

    length = strlen(num);

    if (num[0] == '0')
      break;

    for (int i = 0; i <= length / 2; i++) {
      if (num[i] != num[length - 1 - i]) {
        palindrome = false;
        break;
      }
    }
    if (palindrome == true) {
      printf("yes\n");
    } else if (palindrome == false) {
      printf("no\n");
    }
  }

  return 0;
}