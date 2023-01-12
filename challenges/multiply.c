#include <stdio.h>

int main() {
  int a, b;

  printf("Type the first number: ");
  scanf("%d", &a);

  printf("Type the second number: ");
  scanf("%d", &b);

  printf("%d * %d = %d\n", a, b, a * b);
}
