#include <stdio.h>

int main() {
  printf("***********************************\n");
  printf("* Welcome to our divination game! *\n");
  printf("***********************************\n");

  int secretNumber = 42;
  int attempts = 0;

  // printf("The secret number is %d. Don't tell anyone :)\n", secretNumber);

  while (1) {
    printf("Attempt %d\n", attempts);

    int input;
    printf("What is your input? ");
    scanf("%d", &input);

    if (input < 0) {
      printf("You can only guess positive numbers!\n");

      continue;
    }

    if (input == secretNumber) {
      printf("Congrats, you crushed (with %d attempts)!\n", attempts);
      break;
    } else if (input > secretNumber) {
      printf("Your guess was greater than the secret number\n");
    } else {
      printf("Your guess was lower than the secret number\n");
    }

    attempts += 1;
  }

  printf("Thanks for participating. Hope you had some fun :)\n");
}
