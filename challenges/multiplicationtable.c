#include <stdio.h>

int main() {
  int input;

  printf("Type a number: ");
  scanf("%d", &input);

  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", input, i, input * i);
  }
}
