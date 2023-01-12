#include <stdio.h>

int main() {
  int i = 1;
  int result = 0;

  while (i <= 100) {
    result += i;

    i++;
  }

  printf("%d\n", result);
}
