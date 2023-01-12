#include <stdio.h>

int main() {
  printf("***********************************\n");
  printf("* Welcome to our divination game! *\n");
  printf("***********************************\n");

  int secretNumber = 42;

  // printf("The secret number is %d. Don't tell anyone :)\n", secretNumber);

  int guess;
  printf("What is your guess? ");
  scanf("%d", &guess);

  printf("Your guess was %d.\n", guess);
}
