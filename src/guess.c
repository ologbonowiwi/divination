#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BIGGEST_POSSIBLE_NUMBER 100;
#define INITIAL_SCORE 1000;

int main() {
  printf("***********************************\n");
  printf("* Welcome to our divination game! *\n");
  printf("***********************************\n");

  srand(time(0));
  int secretNumber = rand() % BIGGEST_POSSIBLE_NUMBER;
  int attempts = 1;

  float score = INITIAL_SCORE;
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

    float lostPoints = abs(input - secretNumber) / (float)2;
    score = score - lostPoints;
  }

  printf("Thanks for participating. Hope you had some fun :)\n");

  printf("You have an score of %.1f.\n", score);
}
